# Joan Francesc Pedro Garcia
#Archivo makefile.

#compilador programa principal:
programa: main.o arrays.o matrices.o ventanas.o
	gcc -o programa main.o arrays.o matrices.o ventanas.o

#compilador main:
main.o: main.c edth.h
	gcc -c main.c

#compilador arrays:
arrays.o: arrays.c edth.h
	gcc -c arrays.c

#compilador matrices:
matrices.o: matrices.c edth.h
	gcc -c matrices.c

#compilador ventanas:
ventanas.o: ventanas.c edth.h
	gcc -c ventanas.c

#compilador funciones:
funciones.o: funciones.c edth.h
	gcc -c funciones.c

.PHONY: clean
	#limpiar archivos .o:
clean:
	rm -rf *.o
