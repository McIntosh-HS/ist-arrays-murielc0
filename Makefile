all: intarray curlyarray

intarray: intarray.c
	gcc intarray.c -o intarray

curlyarray: curlyarray.c
	gcc curlyarray.c -o curlyarray

chararray: chararray.c
	gcc chararray.c -o chararray
