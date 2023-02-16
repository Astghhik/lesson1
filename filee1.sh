! /bin/bash 

#Write script which will make a copy of file/directory without using linux "cp" command

function cp_script() {
 if [ -e "$1" ]
then
       if [ -f "$1" ]

       then

        cat "$1" >> "$2"
   fi

# $1 file that is exist.
# $2 new file where doing copy.

else
        echo "File dosen't exist."
fi

}
    
