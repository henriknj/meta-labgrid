DESCRIPTION = "Python library for the snappy compression library from Google"
HOMEPAGE = "http://github.com/andrix/python-snappy"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

SRC_URI[md5sum] = "0c06bbed70a8390b55a60f5ee79a27d2"
SRC_URI[sha256sum] = "385fb216e7d1241f70c14c2bea3f042ec235caa65d708294f1ece50d3efa5de3"

inherit pypi

PYPI_PACKAGE = "python-snappy"

DEPENDS += "snappy"
RDEPENDS_${PN} += "snappy"
