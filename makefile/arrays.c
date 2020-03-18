// Joan Francesc Pedro Garcia
#include "edth.h"

/*
		3.1.1-Inicializar un vector vacio de una longitud determinada
*/
void iniEmptyArray(int columnes, char array[]) {
	int pos;
	for(pos = 0; pos < columnes; pos++) {
		array[pos] = ESPAI;
	}
}

/*
		3.1.2-Imprimir un vector por consola
*/
void printArray(int columnes, char array[]) {
	int pos;
	for(pos = 0; pos < columnes; pos++) {
		printf("%c", array[pos]);
	}
}

/*
		3.1.3-Poner un carácter en una posición de un vector
*/
void putCharOnArray(int columnes, char array[], int columna, char c) {
	if (columna < columnes) {
		array[columna] = c;
	}
}

/*
		3.1.4-Mover hacia la derecha las posiciones de un vector desde una posición determinada
*/
void shiftRightArray(int columnes, char array[], int columna) {
	char moveright[columnes];
	int i;
	for (i = columna + 1; i < columnes; i++) {
		moveright[i] = array[i-1];
	}
	array[columna] = ESPAI;
	for (i = columna + 1; i < columnes; i++) {
		array[i] = moveright[i];
	}
}

/*
		3.1.5-Mover hacia la izquierda las posiciones de un vector desde una posición determinada
*/
void shiftLeftArray(int columnes, char array[], int columna) {
	char moveleft[columnes];
	int i;
	for (i = columna - 1; i <= 0; i--) {
		moveleft[i] = array[i+1];
	}
	array[columna] = ESPAI;
	for (i = columna - 1; i <= 0; i--) {
		array[i] = moveleft[i];
	}
}

/*
		3.1.6-Insertar un carácter en una posición de un vector
*/
void insertCharOnArray(int columnes, char array[], int columna, char c) {
	char moveright[columnes];
	int i;
	for (i = columna + 1; i < columnes; i++) {
		moveright[i] = array[i-1];
	}
	array[columna] = c;
	for (i = columna + 1; i < columnes; i++) {
		array[i] = moveright[i];
	}
}
