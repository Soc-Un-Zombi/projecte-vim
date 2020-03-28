# Joan Francesc Pedro Garcia
#Archivo makefile.

FUNTIONS = main.o arrays.o matrices.o ventanas.o funciones.o parser.o

#execucions automatiques
all: EDT clean

#automatització proves
Prueba1: all
	./EDT "jjjklllhiEsto es un texto"
Prueba2: all
	./EDT "ttTiEscribo&jjllliTexto&g"
Prueba3: all
	./EDT "GiSon varias palabras&hhxxial&hhhx"
Prueba4: all
	./EDT "jjia b c d e f g h&hhhhwwiz"
Prueba5: all
	./EDT "ooOiLinea palabra&jLinea&DkhhhW"

#compilador programa principal:
FUNTIONS = main.o arrays.o matrices.o ventanas.o funciones.o parser.o

EDT: $(FUNTIONS)
	gcc -o EDT $(FUNTIONS)

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

#compilador parser:
parser.o: parser.c edth.h
	gcc -c parser.c

.PHONY: clean
	#limpiar archivos .o:
clean:
	rm -rf *.o
