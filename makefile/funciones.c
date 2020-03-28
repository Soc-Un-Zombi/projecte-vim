// Joan Francesc Pedro García
#include "edth.h"

//envia el cursor al principio de la línea
void gotoBeginLine(int appData[], int appCursors[][2]) {
 appCursors[appData[3]][1] = 0;
}



//borra la línea en la que se encuentra el cursor
void deleteCurrentLine(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2]) {
	if (appCursors[appData[3]][0] < appData[1]-1) {
    int f, c;
    char supMat[appData[1]][appData[2]];
    for (f = appCursors[appData[3]][0]; f < appData[1]; f++) {
      for (c = 0; c < appData[2]; c++) {
        supMat[f][c] = windows[appData[3]][f+1][c];
      }
    }
    iniEmptyArray(appData[2], supMat[appData[1]]-1);
    for (f = appCursors[appData[3]][0]; f < appData[1]; f++) {
      for (c = 0; c < appData[2]; c++) {
        windows[appData[3]][f][c] = supMat[f][c];
      }
    }
  } else if (appCursors[appData[3]][0] == appData[1]-1) {
    iniEmptyArray(appData[2], windows[appData[3]][appCursors[appData[3]][0]]);
  }
}



//mueve el cursor a la primera línea
void gotoFirstLine(int appData[], int appCursors[][2]) {
	setYCursorOnWindow(appData, appCursors, 0);
}

//mueve el cursor a la última línea
void gotoLastLine(int appData[], int appCursors[][2]) {
	setYCursorOnWindow(appData, appCursors, appData[1] - 1);
}

//mueve el cursor a la derecha
void moveCursorRight(int appData[], int appCursors[][2]) {
  setXCursorOnWindow(appData, appCursors, appCursors[appData[3]][1]+1);
}

//mueve el vursor a la siguiente línea
void moveCursorDown(int appData[], int appCursors[][2]) {
	setYCursorOnWindow(appData, appCursors, appCursors[appData[3]][0]+1);
}

//mueve el cursor a la línea anterior
void moveCursorUp(int appData[], int appCursors[][2]) {
	setYCursorOnWindow(appData, appCursors, appCursors[appData[3]][0]-1);
}

//mueve el cursor a la izquierda
void moveCursorLeft(int appData[], int appCursors[][2]) {
	setXCursorOnWindow(appData, appCursors, appCursors[appData[3]][1]-1);
}

//meve el cursor al principio de la siguiente palabra
void gotoNextWord(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2]) {
	appCursors[appData[3]][1] = searchCharOnWindow(appData, windows, appCursors, ESPAI)+1;
}

//elimina des del cursor hasta el final de la palabra
void deleteWord(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2]) {
	do {
		deleteCurrentPositionOnWindow(appData, windows, appCursors);
	} while(windows[appData[3]][appCursors[appData[3]][0]][appCursors[appData[3]][1]] != ESPAI);
  deleteCurrentPositionOnWindow(appData, windows, appCursors);
}

//inserta una línea debajo de la del cursor
void insertDownLine(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2]) {
	if (appCursors[appData[3]][0] != appData[1]-1 || appCursors[appData[3]][0] != appData[1]) {

		int f, c;
		char supportMatrix[appData[1]][appData[2]];

		moveCursorDown(appData, appCursors);
		gotoBeginLine(appData, appCursors);

		for (f = appCursors[appData[3]][0]; f < appData[1]; f++) {
			for (c = 0; c < appData[2]; c++) {
				supportMatrix[f+1][c] = windows[appData[3]][f][c];
			}
		}

		iniEmptyArray(appData[2], supportMatrix[appCursors[appData[3]][0]]);

		for (f = appCursors[appData[3]][0]; f < appData[1]; f++) {
			for (c = 0; c < appData[2]; c++) {
				windows[appData[3]][f][c] = supportMatrix[f][c];
			}
		}

	} else if (appCursors[appData[3]][0] == appData[1]-1) {
		iniEmptyArray(appData[2], windows[appData[3]][appData[1]]);
	}
}

//inserta una línea arriba de la del cursor
void insertUpLine(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2]) {
	if (appCursors[appData[3]][0] != 0 || appCursors[appData[3]][0] != 1) {

		int f, c;
		char supportMatrix[appData[1]][appData[2]];

    moveCursorUp(appData, appCursors);
		gotoBeginLine(appData, appCursors);

		for (f = appCursors[appData[3]][0]; f >= 0; f--) {
			for (c = 0; c < appData[2]; c++) {
				supportMatrix[f-1][c] = windows[appData[3]][f][c];
			}
		}

		iniEmptyArray(appData[2], supportMatrix[appCursors[appData[3]][0]]);

		for (f = appCursors[appData[3]][0]; f >= 0; f--) {
			for (c = 0; c < appData[2]; c++) {
				windows[appData[3]][f][c] = supportMatrix[f][c];
			}
		}

	} else if (appCursors[appData[3]][0] == 1) {
		iniEmptyArray(appData[2], windows[appData[3]][0]);
	}
}

//abre la siguiente ventana
void gotoNextWindow(int appData[]) {
	if (appData[3] < appData[0]) {
		appData[3]++;
	} else {
		appData[3] = 0;
	}
}

//abre la ventana anterior
void gotoBackWindow(int appData[]) {
	if (appData[3] > 0) {
		appData[3]--;
	} else {
		appData[3] = appData[0]-1;
	}
}
