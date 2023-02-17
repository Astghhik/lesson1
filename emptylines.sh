#! /bin/bash

#Delete all the empty lines from the file and save it back.

function empty_lines() {
if [ -e "$1" ]
          then
 # Command that delate empty lines.


                  sed -i '/$/d' "$1"
else
        echo "File dosen't exist."

fi

}
empty_lines $1


