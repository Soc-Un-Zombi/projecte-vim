#include <stdio.h>
#include <stdlib.h>
#define ESPAI ' '

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

/*
		3.2.1-Inicializar una matriz vacía de unas dimensiones determinadas
*/
void iniEmptyMatrix(int files, int columnes, char matrix[files][columnes]) {
	int f, c;
	for (f = 0; f < files; f++) {
		for (c = 0; c < columnes; c++) {
			matrix[f][c] = ESPAI;
		}
	}
}

/*
		3.2.2-Imprimir una matriz por consola
*/
void printMatrix(int files, int columnes, char matrix[files][columnes]) {
	int f, c;
	for (f = 0; f < files; f++) {
		printf(" %d|", f);
		for (c = 0; c < columnes; c++) {
			printf("%c", matrix[f][c]);
		}
		printf("|\n");
	}
}

/*
		3.2.3-Insertar un carácter en una posición de la matriz
*/
void insertCharOnMatrix(int files, int columnes, char matrix[files][columnes], int fila, int columna, char c) {
	char moveright[columnes];
	int i;
	for (i = columna + 1; i < columnes; i++) {
		moveright[i] = matrix[fila][i-1];
	}
	matrix[fila][columna] = c;
	for (i = columna + 1; i < columnes; i++) {
		matrix[fila][i] = moveright[i];
	}
}

/*
		3.2.4-Borrar un carácter de una posición de la matriz
*/
void deleteCharOnMatrix(int files, int columnes, char matrix[files][columnes], int fila, int columna) {
	char deletecharacter[columnes];
	int i;
	for (i = 0; i < columnes; i++) {
		if (i < columna) {
			deletecharacter[i] = matrix[fila][i];
		}
		if (i > columna) {
			deletecharacter[i-1] = matrix[fila][i];
		}
		if (i == columnes-1) {
			deletecharacter[i] = ESPAI;
		}
	}
	for (i = 0; i < columnes; i++) {
		matrix[fila][i] = deletecharacter[i];
	}
}

/*
		Función principal
*/
int main(){
	int a = 10, b = 5, c = 5, d, e, f;
	char array[a];
	char matriu[b][c];

	/*
	for (c = 0; c < a; c++) {
		scanf("%c", &array[c]);
	}
	*/

	iniEmptyMatrix(b, c, matriu);
	deleteCharOnMatrix(b, c, matriu, 2, 2);
	printMatrix(b, c, matriu);

	return 0;
}
