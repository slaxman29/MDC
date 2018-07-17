#! /bin/bash
for file in $(ls *.h)
do
	ci $file
done
for file in $(ls *.c)
do
	ci $file
done
for file in $(ls *.h,v)
do
	co $file
done
for file in $(ls *.c,v)
do
	co $file
done
if( make )
then
	read -p "you want to run the program (y/n)" response
	if [ $response = 'y' ]
	then
		./run
	fi
fi
for file in $(ls *.h,v)
do
	co -l $file
done
for file in $(ls *.c,v)
do
	co -l $file
done
rm *.o
rm run




