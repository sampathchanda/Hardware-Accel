#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/littlefoot/18643_project/Hardware-Accel/HW/cnn_layer_2/solution1/.autopilot/db/a.g.bc ${1+"$@"}