// Joan Francesc Pedro Garcia
#include "edth.h"

//Inicializar un vector vacio de una longitud determinada
void iniEmptyArray(int columnes, char array[]) {
	int pos;
	for(pos = 0; pos < columnes; pos++) {
		array[pos] = ESPAI;
	}
}

//Imprimir un vector por consola
void printArray(int columnes, char array[]) {
	int pos;
	for(pos = 0; pos < columnes; pos++) {
		printf("%c", array[pos]);
	}
}

//Poner un carácter en una posición de un vector
void putCharOnArray(int columnes, char array[], int columna, char c) {
	if (columna < columnes) {
		array[columna] = c;
	}
}

//Mover hacia la derecha las posiciones de un vector desde una posición determinada
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

//Mover hacia la izquierda las posiciones de un vector desde una posición determinada
void shiftLeftArray(int columnes, char array[], int columna) {
	char moveleft[columnes];
	int i;
	for (i = columna; i < columnes; i++) {
		moveleft[i] = array[i+1];
	}
	moveleft[columnes - 1] = ESPAI;
	for (i = columna; i < columnes; i++) {
		array[i] = moveleft[i];
	}
}

//Insertar un carácter en una posición de un vector
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

//Buscar un carácter en la línea
int searchCharOnArray(int columnes, char array[], int columna, char c) {
	int i;
	for (i = columna; i < columnes; i++) {
		if (array[i] == c) {
			return i;
		}
	}
	return i;
}

//Buscar un carácter diferente en la línea
int searchNoCharOnArray(int columnes, char array[], int columna, char c){
	int i;
	for (i = columna; i < columnes; i++) {
		if (array[i] != c) {
			return i;
		}
	}
	return i;
}
