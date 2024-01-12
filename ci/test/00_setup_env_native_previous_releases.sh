#!/usr/bin/env bash
#
# Copyright (c) 2019-present The Bitcoin Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.

export LC_ALL=C.UTF-8

export CONTAINER_NAME=ci_native_previous_releases
export CI_IMAGE_NAME_TAG="docker.io/debian:bullseye"
# Use minimum supported python3.9 and gcc-10, see doc/dependencies.md
export PACKAGES="gcc-10 g++-10 python3-zmq"
export DEP_OPTS="NO_UPNP=1 NO_NATPMP=1 DEBUG=1 CC=gcc-10 CXX=g++-10"
export GOAL="install"
export DOWNLOAD_PREVIOUS_RELEASES="true"
export GROESTLCOIN_CONFIG="--enable-zmq --with-libs=no --with-gui=qt5 --enable-reduce-exports --enable-debug \
CFLAGS=\"-g0 -O2 -funsigned-char\" CPPFLAGS='-DBOOST_MULTI_INDEX_ENABLE_SAFE_MODE' CXXFLAGS=\"-g0 -O2 -funsigned-char\""
