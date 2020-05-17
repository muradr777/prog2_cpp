#!/bin/bash
# compiling given file
g++ -o "./output/$1" "$1.cpp"

if [[ ("$2" != -v) && ("$2" == "run") ]]
then
    ./output/$1
fi