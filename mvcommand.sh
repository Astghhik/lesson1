#! /bin/bash

#Function which will move file/directory hierarchy without using linux mv command.

function move_script() {
	if [ -e "$1" ]
	then
		if [ -f "$1" ]
		then 
			cp "$1" "$2" 
			rm "$1"

		elif [ -d "$1" ]
		then 
			cp -r "$1"/* "$2"
			rm -r "$1"
		elif [ -f "$1" ] && [ -d "$2" ]
		then 
			cp "$1" "$2/"
			rm "$1"
		fi
else 
	echo "$1 file/directory dosn't exist."
fi 
}
move_script $1 $2
# $1 is file or directorythat is exist.
# $2 is new file or directory or can be directory.
