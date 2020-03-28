// Joan Francesc Pedro Garcia
#include "edth.h"

//Establecer la ventana activa
void setActiveWindow(int appData[], int aw) {
	appData[3] = aw;
}

//Inicializar una ventana (queda vacía)
void iniWindow(int appData[], char Windows[][appData[1]][appData[2]], int Window) {
	iniEmptyMatrix(appData[1], appData[2], Windows[Window]);
}

//Inicializar todas las ventanas (todas quedan vacías)
void iniWindows(int appData[], char Windows[][appData[1]][appData[2]], int appCursors[][2]) {
	int w, f, c;
	for (w = 0; w < appData[0]; w++) {
		iniWindow(appData, Windows, w);
	}

	for (f = 0; f < appData[0]; f++) {
		for (c = 0; c < 2; c++) {
			appCursors[f][c] = 0;
		}
	}
}

//Imprimir información de la aplicación
void printWindowInfo(int appData[], int appCursors[][2]) {
	printf("%d - %d,%d\n", appData[3], appCursors[appData[3]][0], appCursors[appData[3]][1]);
}

//Imprimir una pantalla por consola
void printWindow(int appData[], char matrix[appData[1]][appData[2]]) {
	printf("   ---------------\n");
	printMatrix(appData[1], appData[2], matrix);
	printf("   ---------------\n");
}

//Imprimir la pantalla activa de la aplicación
void printCurrentWindow(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2]) {
	printf("\n");
	printWindowInfo(appData, appCursors);
	printWindow(appData, windows[appData[3]]);
	printf("\n");
}


//Comprobar que la fila es legal en la aplicación
bool isLegalFile(int appData[], int y) {
	if (y < appData[1] && y >= 0) {
		return true;
	}
	return false;
}

//Establecer la fila del cursor en la ventana activa
void setYCursorOnWindow(int appData[], int appCursors[][2], int y) {
	if (isLegalFile(appData, y)) {
		y = appCursors[appData[3]][0];
	}
}

//Comprobar que la columna es legal en la aplicación
bool isLegalColumn(int appData[], int x) {
	if (x < appData[2] && x >= 0) {
		return true;
	}
	return false;
}

//Establecer la columna del cursor en la ventana activa
void setXCursorOnWindow(int appData[], int appCursors[][2], int x) {
	if (isLegalColumn(appData, x)) {
		x = appCursors[appData[3]][1];
	}
}

//Insertar un carácter en la posición actual en la ventana activa
void insertCharOnWindow(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2], char c) {
	insertCharOnMatrix(appData[1], appData[2], windows[appData[3]], appCursors[appData[3]][0], appCursors[appData[3]][1], c);
	if (appCursors[appData[3]][1] < appData[2] - 1) {
		appCursors[appData[3]][1]++;
	}
}


//Borrar el carácter de la posición actual en la ventana activa
void deleteCurrentPositionOnWindow(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2]) {
	deleteCharOnMatrix(appData[1], appData[2], windows[appData[3]], appCursors[appData[3]][0], appCursors[appData[3]][1]);
}

//Buscar un carácter en la ventana activa
int searchCharOnWindow(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2], char c) {
	return searchCharOnMatrix(appData[1], appData[2], windows[appData[3]], appCursors[appData[3]][0], appCursors[appData[3]][1], c);
}

//Buscar un carácter diferente en la ventana activa
int searchNoCharOnWindow(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2], char c) {
	return searchNoCharOnMatrix(appData[1], appData[2], windows[appData[3]], appCursors[appData[3]][0], appCursors[appData[3]][1], c);
}
