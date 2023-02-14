#! /bin/bash

#Delete all the empty lines from the file and save it back.

read -p "Input first file name" file_path1
while read -r line
do
	if [[ $line=~ ^$ ]]
	 then
		 continue
  else
	  echo $line
fi
done < $file_path1
