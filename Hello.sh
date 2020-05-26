#!/usr/bin/zsh

function hello () {
	for i in `seq 1 $2`;
	do
		echo "$i. $0 => Welcome, $1. The system is active since `uptime -s`";
	done
}

hello $USER 7;