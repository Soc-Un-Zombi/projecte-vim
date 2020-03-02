


//TRABAJO DE: Joan Francesc Pedro Garcia



#include <stdio.h>
#include <stdbool.h>

#define MAXFILAS 10
#define MAXCOLUMNAS 10

/*
    INICIALITZACIÓ DE TAULELL
*/
void iniTablero(int fil, int col, char tablero[][MAXCOLUMNAS]) {
  int f, c;
  for (f = 0; f < fil; f++) {
    for (c = 0; c < col; c++) {
      tablero[f][c] = '0';
    }
  }
}

/*
    COL·LOCACIÓ DELS VAIXELLS
*/
void colBarco(int fil, int col, int longitud, char tipo, char tablero[][MAXCOLUMNAS]) {
  int valorfinal;
  int i;
  if (tipo == 'H') {
    valorfinal = col + longitud;
    for (i = col; i < valorfinal; i++) {
      tablero[fil][i] = '*';
    }
  }
  if (tipo == 'V') {
    valorfinal = fil + longitud;
    for (i = fil; i < valorfinal; i++) {
      tablero[i][col] = '*';
    }
  }
}

/*
    IMPRIMIR TABLERO
*/
void printTablero(int fil, int col, char tablero[][MAXCOLUMNAS]) {
  int f, c;

  printf("\n");
  for (f = 0; f < fil; f++) {
    printf("\t");
    for (c = 0; c < col; c++) {
      printf("%c ", tablero[f][c]);
    }
    printf("\n\n");
  }
}

/*
    BOOL PARA COMPROBAR QUE LOS VALORES SON LOS CORRECTOS
*/
bool isCorrect(int fil, int col, int longitud, int barcos, char tipo, char tablero[][MAXCOLUMNAS]) {

  if (barcos < 0) {
    return false;
  }

  if (longitud > 4) {
    return false;
  }

  int valorfinal;
  int i;

  if (tipo == 'H') {
    valorfinal = col + longitud;

    if (valorfinal > MAXCOLUMNAS) {
      return false;
    }

    for (i = col; i < valorfinal; i++) {
      if (tablero[fil][i] == '*') {
        return false;
      }
    }
  }

  if (tipo == 'V') {
    valorfinal = fil + longitud;

    if (valorfinal > MAXFILAS) {
      return false;
    }

    for (i = fil; i < valorfinal; i++) {
      if (tablero[i][col] == '*') {
        return false;
      }
    }
  }

  if (tipo == 'V') {
    return true;
  }

  if (tipo == 'V') {
    return true;
  }

  return true;
}


int main(void) {

  char taulell[MAXFILAS][MAXCOLUMNAS];
  int b1 = 4, b2 = 3, b3 = 2, b4 = 1;
  int b;
  int f, c, l;
  char modo;

  iniTablero(MAXFILAS, MAXCOLUMNAS, taulell);

  while (b1 != 0 && b2 != 0 && b3 != 0 && b4 != 0) {

    printf("Escriu la fila on vols col·locar el vaixell: ");
    scanf(" %d", &f);
    printf("Escriu la col·lumna on vols col·locar el vaixell: ");
    scanf(" %d", &c);
    printf("Escriu la mida del vaixell: ");
    scanf(" %d", &l);
    printf("Escriu la orientació del vaixell (H o V): ");
    scanf(" %c", &modo);

    if (l == 1) {
      b = b1;
    }
    if (l == 2) {
      b = b2;
    }
    if (l == 3) {
      b = b3;
    }
    if (l == 4) {
      b = b4;
    }


    if (isCorrect(f, c, l, b, modo, taulell)) {

      colBarco(f, c, l, modo, taulell);
      printTablero(MAXFILAS, MAXCOLUMNAS, taulell);

      if (l == 1) {
        b1 =- 1;
      }
      if (l == 2) {
        b2 =- 1;
      }
      if (l == 3) {
        b3 =- 1;
      }
      if (l == 4) {
        b4 =- 1;
      }

    }else{
      printf("\n\nERROR, has posat alguna cosa malament\n\n\n");
    }
  }
}
