#!/bin/bash
for passwrd in $(strings ./101-crackme)
	do
	printf "Trying: %s \n" "$passwrd"
	cp 101-crackme temp.out
	./temp.out $passwrd
	printf "\n"
	done
