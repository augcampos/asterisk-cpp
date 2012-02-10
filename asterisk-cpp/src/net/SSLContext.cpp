/************************************
 * Package: RGcpp					*
 * Authors: Rui Eduardo Gouveia Gil	*
 * Date: 2010						*
 ************************************/
#include "asteriskcpp/net/SSLContext.h"

namespace asteriskcpp {

	bool SSLContext::sslInit = false;
	boost::mutex SSLContext::mut;
	std::string SSLContext::password2check = "";
	std::vector<boost::mutex*> SSLContext::mutexVector;

	SSLContext::SSLContext(const std::string& certFileList) {
		boost::mutex::scoped_lock lock(SSLContext::mut);

		createCTX();
		loadCerts(certFileList, false);
	}

	SSLContext::SSLContext(const std::string& keyFile, const std::string& certFile, const std::string& pass) {
		boost::mutex::scoped_lock lock(SSLContext::mut);

		createCTX();
		loadKeys(keyFile, certFile, pass);
	}

	SSLContext::SSLContext(const std::string& keyFile, const std::string& certFile, const std::string& certFileList, const std::string& pass,
			bool requireCertification) {
		boost::mutex::scoped_lock lock(SSLContext::mut);

		createCTX();
		loadKeys(keyFile, certFile, pass);
		loadCerts(certFileList, requireCertification);
	}

	SSLContext::~SSLContext() {
		if (ctx)
			SSL_CTX_free(ctx);
	}

	SSL_CTX* SSLContext::getContext() {
		return (ctx);
	}

// The method describes which SSL protocol we will be using.
	void SSLContext::createCTX() {
		ERR_clear_error();
		if (!SSLContext::sslInit) {
			// Load algorithms and error std::strings.
			SSL_library_init();
			SSL_load_error_strings();

			for (int i = 0; i < CRYPTO_num_locks(); ++i)
				SSLContext::mutexVector.push_back(new boost::mutex());

			CRYPTO_set_id_callback(&SSLContext::getID);
			CRYPTO_set_locking_callback(&SSLContext::lock);

			SSLContext::sslInit = true;
		}

		// Create new context compatible with SSLv2, SSLv3 and TLSv1
		ERR_clear_error();
		ctx = SSL_CTX_new(SSLv23_method());

		if (ctx == NULL) {
			Throw(RuntimeException(std::string("Unable to create ssl context - ")+strerror(errno)));
		}
	}

//Load the public and private keys.
	void SSLContext::loadKeys(const std::string& keyFile, const std::string& certFile, const std::string& pass) {
		ERR_clear_error();
		if (SSL_CTX_use_certificate_chain_file(ctx, certFile.c_str()) <= 0) {
			Throw(RuntimeException(std::string("Unable to create ssl context - ")+certFile));
		}

		if (pass != "") {
			password2check = pass;
			SSL_CTX_set_default_passwd_cb(ctx, passwordCheck);
		}

		ERR_clear_error();
		if (SSL_CTX_use_PrivateKey_file(ctx, keyFile.c_str(), SSL_FILETYPE_PEM) <= 0) {
			Throw(RuntimeException(std::string("Invalid Private Key File - ")+keyFile));
		}

		ERR_clear_error();
		// Verify that the two keys goto together.
		if (!SSL_CTX_check_private_key(ctx)) {
			Throw(RuntimeException(std::string("Private key is invalid - ")+keyFile));
		}
	}

//Load the certification files
	void SSLContext::loadCerts(const std::string& certFileList, bool requireCertification) {
		ERR_clear_error();
		if (requireCertification)
			SSL_CTX_set_verify(ctx, SSL_VERIFY_PEER | SSL_VERIFY_FAIL_IF_NO_PEER_CERT, NULL);
		else
			SSL_CTX_set_verify(ctx, SSL_VERIFY_PEER, NULL);

		ERR_clear_error();
		SSL_CTX_set_verify_depth(ctx, SSL_VERIFY_DEPTH);

		ERR_clear_error();
		if (SSL_CTX_load_verify_locations(ctx, certFileList.c_str(), NULL) <= 0) {
			Throw(RuntimeException(std::string("Invalid Certificate File - ")+certFileList));
		}
	}

	int SSLContext::passwordCheck(char* buffer, int num, int rwflag, void *userdata) {
		if ((size_t) num < password2check.size() + 1)
			return (0);

		strcpy(buffer, password2check.c_str());

		return (password2check.size());
	}

	void SSLContext::lock(int mode, int n, const char* file, int line) {
		if (mode & CRYPTO_LOCK)
			SSLContext::mutexVector[n]->lock();
		else
			SSLContext::mutexVector[n]->unlock();
	}

	unsigned long SSLContext::getID() {
#ifdef _WIN32
		return ((unsigned long) boost::detail::win32::GetCurrentThreadId());
#else
		return ((unsigned long) pthread_self());
#endif
	}

}
