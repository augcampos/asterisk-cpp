#!/usr/bin/env make

SRC_FOLDER:=asterisk-cpp
EXAMPLE_FOLDER:=asterisk-cpp/examples

ALL: clean dependencies install
	@echo " -- ALL -- "

clean:
	cd $(SRC_FOLDER); make clean || true
	rm -f $(EXAMPLE_FOLDER)/tt
	rm -f $(EXAMPLE_FOLDER)/teste
	sudo rm -f /usr/lib/libasteriskcpp.so*

dependencies:
	sudo apt-get -qy install liblog4cplus-dev libssl-dev libboost-thread-dev libboost-regex-dev

build: 
	cd $(SRC_FOLDER); aclocal ; autoheader; automake -a -c; libtoolize --force --copy; autoconf
	cd $(SRC_FOLDER); autoconf; automake --add-missing; ./configure
	cd $(SRC_FOLDER); make
	ls -la /usr/local/include/asteriskcpp

/usr/local/lib/libasteriskcpp.so: build build # some times need a 2nd build 

/usr/lib/libasteriskcpp.so: /usr/local/lib/libasteriskcpp.so
	cd $(SRC_FOLDER); sudo make install
	sudo ln -s /usr/local/lib/libasteriskcpp.so /usr/lib/libasteriskcpp.so
	sudo ln -s /usr/local/lib/libasteriskcpp.so.0 /usr/lib/libasteriskcpp.so.0

install: /usr/lib/libasteriskcpp.so


$(EXAMPLE_FOLDER)/tt:
	cd $(EXAMPLE_FOLDER); g++ Test.cpp -o tt -L/usr/local/lib/ -lasteriskcpp -lpthread
$(EXAMPLE_FOLDER)/teste:
	cd $(EXAMPLE_FOLDER); sh ./makeTest.sh

test: $(EXAMPLE_FOLDER)/tt $(EXAMPLE_FOLDER)/teste
	$(EXAMPLE_FOLDER)/tt
	$(EXAMPLE_FOLDER)/teste