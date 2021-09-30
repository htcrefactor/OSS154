#!/bin/bash
if ./a.out ; then
	echo "True"
else
	echo "False"
fi

#NAME="Hyung-Taik"
NAME=
SURNAME="CHOI"

if [[ -z NAME ]] ; then
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

