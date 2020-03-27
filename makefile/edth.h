// Joan Francesc Pedro Garcia
#include <stdio.h>
#include <stdbool.h>
#define ESPAI ' '

//  basic

//	3.1: Arrays
void iniEmptyArray(int columnes, char array[]);
void printArray(int columnes, char array[]);
void putCharOnArray(int columnes, char array[], int columna, char c);
void shiftRightArray(int columnes, char array[], int columna);
void shiftLeftArray(int columnes, char array[], int columna);
void insertCharOnArray(int columnes, char array[], int columna, char c);

//	3.2: Martices
void iniEmptyMatrix(int files, int columnes, char matrix[files][columnes]);
void printMatrix(int files, int columnes, char matrix[files][columnes]);
void insertCharOnMatrix(int files, int columnes, char matrix[files][columnes], int fila, int columna, char c);
void deleteCharOnMatrix(int files, int columnes, char matrix[files][columnes], int fila, int columna);

//	3.3: Ventanas
void setActiveWindow(int appData[], int aw);
void iniWindow(int appData[], char Windows[][appData[1]][appData[2]], int Window);
void iniWindows(int appData[], char Windows[][appData[1]][appData[2]], int appCursors[][2]);
void printWindowInfo(int appData[], int appCursors[][2]);
void printWindow(int appData[], char matrix[appData[1]][appData[2]]);
void printCurrentWindow(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2]);
bool isLegalFile(int appData[], int y);
void setYCursorOnWindow(int appData[], int appCursors[][2], int y);
bool isLegalColumn(int appData[], int x);
void setXCursorOnWindow(int appData[], int appCursors[][2], int x);

//  3.4: Funciones
void iniappData(int appData[]);
void insertCharOnWindow(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2], char c);
void deleteCurrentPositionOnWindow(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2]);
