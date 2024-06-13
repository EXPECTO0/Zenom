#--------------------------------------------------------------
#
# Zenom Hard real-time simulation environment
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the Zenom License, Version 2.0
#
#--------------------------------------------------------------

ZENOM_VER_MAJ   = 1
ZENOM_VER_MIN   = 0
ZENOM_VER_PAT   = 0
ZENOM_VERSION   = $${ZENOM_VER_MAJ}.$${ZENOM_VER_MIN}.$${ZENOM_VER_PAT}

#--------------------------------------------------------------
# Install paths
#--------------------------------------------------------------

ZENOM_INSTALL_PREFIX = /usr/local

ZENOM_INSTALL_HEADERS   = $${ZENOM_INSTALL_PREFIX}/include/zenom
ZENOM_INSTALL_LIBS      = $${ZENOM_INSTALL_PREFIX}/lib64
ZENOM_INSTALL_BINS      = $${ZENOM_INSTALL_PREFIX}/bin

#--------------------------------------------------------------
# Qwt path
#--------------------------------------------------------------

QWT_HEADERS   = /home/sefa/Documents/qwt-6.2.0/src
QWT_LIBS      = /home/sefa/Documents/qwt-6.2.0/lib
