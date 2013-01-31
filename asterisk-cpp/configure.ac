AC_INIT([asteriskcpp], [1.0.0], [augcampos@augcampos.com])
AM_INIT_AUTOMAKE
AC_LANG(C++)
AC_PROG_CXX
AC_PROG_CC
AC_PROG_CPP
AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_MAKE_SET
AC_SUBST(LIBTOOL_DEPS)

LT_INIT([disable-static])

AC_CONFIG_MACRO_DIR([m4])

AC_CHECK_LIB([log4cplus], [main])
AC_CHECK_LIB([ssl], [main])
AC_CHECK_LIB([boost_regex], [main])
AC_CHECK_LIB([boost_thread], [main])
AC_CHECK_LIB([boost_date_time], [main])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT