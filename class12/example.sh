#!/bin/bash

# Parameter 1 is a name, parameter 2 is a number

# use -e to use \ characters
echo "Example\tshell\tscript"
echo -e "Example\tshell\tscript"

#run a command
echo "Your files:"
ls

# run a different shell script
./hello.sh $1

ii=1

while [ $ii -le $2 ]
do
  echo $ii
  ii=$((ii+1))
done

echo "Good night!"
