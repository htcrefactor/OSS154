#!/bin/bash
# NAME="Hwanyong"
NAME=
SIRNAME="Lee"

echo $! $0 $$
./a.out
if (( $? == 100 )) 
then
	echo "100"
fi

if [[ -z $NAME ]] ; then
	echo "True"
else
	echo "False"
fi

if [[ hello.c -ef hello2.c ]] 
then
	echo "Same"
else
	echo "Diff"
fi

