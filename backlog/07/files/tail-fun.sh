#!/bin/bash

echoerr() { echo "$@" 1>&2; }

echoerr asdf

while true; do 
  echoerr $(cat /proc/sys/kernel/random/uuid);
  sleep 0.01
done
