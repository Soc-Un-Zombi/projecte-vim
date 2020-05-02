// Joan Francesc Pedro Garcia
#include "edth.h"

//Inicializar una matriz vacía de unas dimensiones determinadas
void iniEmptyMatrix(int files, int columnes, char matrix[files][columnes]) {
	int f;
	for (f = 0; f < files; f++) {
		iniEmptyArray(columnes, matrix[f]);
	}
}

//Imprimir una matriz por consola
void printMatrix(int files, int columnes, char matrix[files][columnes]) {
	int f;
	for (f = 0; f < files; f++) {
		printf(" %d|", f);
		printArray(columnes, matrix[f]);
		printf("|\n");
	}
}

//Insertar un carácter en una posición de la matriz
void insertCharOnMatrix(int files, int columnes, char matrix[files][columnes], int fila, int columna, char c) {
	insertCharOnArray(columnes, matrix[fila], columna, c);
}

//Borrar un carácter de una posición de la matriz
void deleteCharOnMatrix(int files, int columnes, char matrix[files][columnes], int fila, int columna) {
	shiftLeftArray(columnes, matrix[fila], columna);
}

//Buscar un carácter en la matriz
int searchCharOnMatrix(int files, int columnes, char matrix[files][columnes], int fila, int columna, char c) {
	return searchCharOnArray(columnes, matrix[fila], columna, c);
}

//Buscar un carácter diferente en la matriz
int searchNoCharOnMatrix(int files, int columnes, char matrix[files][columnes], int fila, int columna, char c) {
	return searchNoCharOnArray(columnes, matrix[fila], columna, c);
}
