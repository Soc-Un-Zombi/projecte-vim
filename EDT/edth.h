// Joan Francesc Pedro Garcia
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define ESPAI ' '

//Arrays
void iniEmptyArray(int columnes, char array[]);
void printArray(int columnes, char array[]);
void putCharOnArray(int columnes, char array[], int columna, char c);
void shiftRightArray(int columnes, char array[], int columna);
void shiftLeftArray(int columnes, char array[], int columna);
void insertCharOnArray(int columnes, char array[], int columna, char c);
int searchCharOnArray(int columnes, char array[], int columna, char c);
int searchNoCharOnArray(int columnes, char array[], int columna, char c);

//Martices
void iniEmptyMatrix(int files, int columnes, char matrix[files][columnes]);
void printMatrix(int files, int columnes, char matrix[files][columnes]);
void insertCharOnMatrix(int files, int columnes, char matrix[files][columnes], int fila, int columna, char c);
void deleteCharOnMatrix(int files, int columnes, char matrix[files][columnes], int fila, int columna);
int searchCharOnMatrix(int files, int columnes, char matrix[files][columnes], int fila, int columna, char c);
int searchNoCharOnMatrix(int files, int columnes, char matrix[files][columnes], int fila, int columna, char c);

//Ventanas
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
void insertCharOnWindow(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2], char c);
void deleteCurrentPositionOnWindow(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2]);
int searchCharOnWindow(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2], char c);
int searchNoCharOnWindow(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2], char c);

//Funciones
void gotoBeginLine(int appData[], int appCursors[][2]);
void deleteCurrentLine(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2]);
void gotoFirstLine(int appData[], int appCursors[][2]);
void gotoLastLine(int appData[], int appCursors[][2]);
void moveCursorRight(int appData[], int appCursors[][2]);
void moveCursorDown(int appData[], int appCursors[][2]);
void moveCursorUp(int appData[], int appCursors[][2]);
void moveCursorLeft(int appData[], int appCursors[][2]);
void gotoNextWord(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2]);
void deleteWord(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2]);
void insertDownLine(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2]);
void insertUpLine(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2]);
void gotoNextWindow(int appData[]);
void gotoBackWindow(int appData[]);

//Parser
void parser(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2], char input);
void parseInput(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2], char input[]);
