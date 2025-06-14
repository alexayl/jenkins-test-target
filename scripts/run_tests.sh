#!/bin/bash
set -e
cd build
ctest || ./test_motor
