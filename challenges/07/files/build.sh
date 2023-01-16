#!/bin/bash

pushd .
cd "$(dirname "$0")"
echo "start of script :)"
echo "$(ls -la)"
for i in $(ls -1 ./x??); do tar -cvzf ./$i.tar.gz ./$i; done
echo "second round :)"
rm ./x??
for i in $(ls -1 ./x??.tar.gz); do tar -cvzf ./$i.tar.gz ./$i; done
echo "third round"
rm ./x??.tar.gz
tar -cvzf unpack_me.tar.gz ./x??.tar.gz.tar.gz
popd
