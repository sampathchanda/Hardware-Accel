#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/littlefoot/18643_project/Hardware-Accel/HW/fifo_splitter/fifo_splitter/solution1/.autopilot/db/a.g.bc ${1+"$@"}