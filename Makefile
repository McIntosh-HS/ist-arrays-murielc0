all: intarray curlyarray

intarray: intarray.c
	gcc intarray.c -o intarray

curlyarray: curlyarray.c
	gcc curlyarray.c -o curlyarray
