// Joan Francesc Pedro Garcia
#include "edth.h"

// 3.3.1-Establecer la ventana activa
void setActiveWindow(int appData[], int aw) {
	appData[3] = aw;
}

//3.3.2-Inicializar una ventana (queda vacía)
void iniWindow(int appData[], char Windows[][appData[1]][appData[2]], int Window) {
	iniEmptyMatrix(appData[1], appData[2], Windows[Window]);
}

//3.3.3-Inicializar todas las ventanas (todas quedan vacías)
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

//3.3.4-Imprimir información de la aplicación
void printWindowInfo(int appData[], int appCursors[][2]) {
	printf("%d - %d,%d\n", appData[3], appCursors[appData[3]][0], appCursors[appData[3]][1]);
}

//3.3.5-Imprimir una pantalla por consola
void printWindow(int appData[], char matrix[appData[1]][appData[2]]) {
	printf("   ----------\n");
	printMatrix(appData[1], appData[2], matrix);
	printf("   ----------\n");
}

//3.3.6-Imprimir la pantalla activa de la aplicación
void printCurrentWindow(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2]) {
	printf("\n");
	printWindowInfo(appData, appCursors);
	printWindow(appData, windows[appData[3]]);
	printf("\n");
}


//3.3.7-Comprobar que la fila es legal en la aplicación
bool isLegalFile(int appData[], int y) {
	if (y < appData[1] && y >= 0) {
		return true;
	}
	return false;
}

//3.3.8-Establecer la fila del cursor en la ventana activa
void setYCursorOnWindow(int appData[], int appCursors[][2], int y) {
	if (isLegalFile(appData, y)) {
		y = appCursors[appData[3]][0];
	}
}

//3.3.9-Comprobar que la columna es legal en la aplicación
bool isLegalColumn(int appData[], int x) {
	if (x < appData[2] && x >= 0) {
		return true;
	}
	return false;
}

//3.3.10-Establecer la columna del cursor en la ventana activa
void setXCursorOnWindow(int appData[], int appCursors[][2], int x) {
	if (isLegalColumn(appData, x)) {
		x = appCursors[appData[3]][1];
	}
}
