// Joan Francesc Pedro Garcia
#include "edth.h"

//3.2.1-Inicializar una matriz vacía de unas dimensiones determinadas
void iniEmptyMatrix(int files, int columnes, char matrix[files][columnes]) {
	int f;
	for (f = 0; f < files; f++) {
		iniEmptyArray(columnes, matrix[f]);
	}
}

//3.2.2-Imprimir una matriz por consola
void printMatrix(int files, int columnes, char matrix[files][columnes]) {
	int f;
	for (f = 0; f < files; f++) {
		printf(" %d|", f);
		printArray(columnes, matrix[f]);
		printf("|\n");
	}
}

//3.2.3-Insertar un carácter en una posición de la matriz
void insertCharOnMatrix(int files, int columnes, char matrix[files][columnes], int fila, int columna, char c) {
	insertCharOnArray(columnes, matrix[fila], columna, c);
}

//3.2.4-Borrar un carácter de una posición de la matriz
void deleteCharOnMatrix(int files, int columnes, char matrix[files][columnes], int fila, int columna) {
	shiftLeftArray(columnes, matrix[fila], columna);
}
