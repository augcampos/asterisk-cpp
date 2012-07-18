#!/bin/bash
aclocal
libtoolize --force --copy
automake -a -c
autoconf
