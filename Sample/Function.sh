#!/usr/bin/zsh

function function () {
	for i in `seq 1 $2`;
	do
		echo "$i. $0 => Welcome, $1. The system is active since `uptime -s`";
	done
}

function $USER 7;