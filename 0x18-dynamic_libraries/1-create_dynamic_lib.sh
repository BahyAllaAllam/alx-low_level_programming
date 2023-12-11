#!/bin/bash

c_files=$(ls *.c 2>/dev/null)

if [ -z "$c_files" ]; then
	echo "No .c files found in the current directory."
	exit 1
fi
