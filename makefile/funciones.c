// Joan Francesc Pedro García
#include "edth.h"

//Inicialización de appData
void iniappData(int appData[]) {
	appData [0] = 3;  //n. ventanas
	appData [1] = 5;  //n. filas
	appData [2] = 10; //n. columnas
	appData [3] = 0;  //ventana activa
}

//3.4.1-Insertar un carácter en la posición actual en la ventana activa
void insertCharOnWindow(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2], char c) {
	insertCharOnMatrix(appData[1], appData[2], windows[appData[3]], appCursors[appData[3]][0], appCursors[appData[3]][1], c);
}


//3.4.2-Borrar el carácter de la posición actual en la ventana activa
void deleteCurrentPositionOnWindow(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2]) {
	deleteCharOnMatrix(appData[1], appData[2], windows[appData[3]], appCursors[appData[3]][0], appCursors[appData[3]][1]);
}
