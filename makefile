#! /bin/bash
run: main.o out.o mainmenu.o compression.o filename.o openfile.o readfile.o masterarray.o unique.o insert.o writefile.o codelenth.o compression2.o compression3.o compression4.o compression5.o compression6.o compression7.o decompression.o decompression2.o decompression3.o decompression4.o decompression5.o decompression6.o decompression7.o
	gcc -o run main.o out.o mainmenu.o compression.o filename.o openfile.o readfile.o masterarray.o unique.o insert.o writefile.o codelenth.o compression2.o compression3.o compression4.o compression5.o compression6.o compression7.o decompression.o decompression2.o decompression3.o decompression4.o decompression5.o decompression6.o decompression7.o

out.o: out.c header.h prototype.h
	gcc -c out.c
main.o: main.c header.h prototype.h
	gcc -c main.c
mainmenu.o: mainmenu.c header.h prototype.h
	gcc -c mainmenu.c
filename.o: filename.c header.h prototype.h
	gcc -c filename.c
compression.o: compression.c header.h prototype.h
	gcc -c compression.c
openfile.o: openfile.c header.h prototype.h
	gcc -c openfile.c
readfile.o: readfile.c header.h prototype.h
	gcc -c readfile.c
masterarray.o: masterarray.c header.h prototype.h
	gcc -c masterarray.c
unique.o: unique.c header.h prototype.h
	gcc -c unique.c
insert.o: insert.c header.h prototype.h
	gcc -c insert.c
writefile.o: writefile.c header.h prototype.h
	gcc -c writefile.c
codelenth.o: codelenth.c header.h prototype.h
	gcc -c codelenth.c
compression2.o: compression2.c header.h prototype.h
	gcc -c compression2.c
compression3.o: compression3.c header.h prototype.h
	gcc -c compression3.c
compression4.o: compression4.c header.h prototype.h
	gcc -c compression4.c
compression5.o: compression5.c header.h prototype.h
	gcc -c compression5.c
compression6.o: compression6.c header.h prototype.h
	gcc -c compression6.c
compression7.o: compression7.c header.h prototype.h
	gcc -c compression7.c
decompression.o: decompression.c header.h prototype.h
	gcc -c decompression.c
decompression2.o: decompression2.c header.h prototype.h
	gcc -c decompression2.c
decompression3.o: decompression3.c header.h prototype.h
	gcc -c decompression3.c
decompression4.o: decompression4.c header.h prototype.h
	gcc -c decompression4.c
decompression5.o: decompression5.c header.h prototype.h
	gcc -c decompression5.c
decompression6.o: decompression6.c header.h prototype.h
	gcc -c decompression6.c
decompression7.o: decompression7.c header.h prototype.h
	gcc -c decompression7.c


