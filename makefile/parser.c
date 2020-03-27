// Joan Francesc Pedro García
#include "edth.h"

void parser(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2], char input) {

  //mode 0 es normal i mode 1 es inserción

  static int mode = 0;

  if(mode == 0) {
    switch(input) {
      case 'i':
        mode = 1;
        break;

      case 'j':
        moveCursorDown(appData, appCursors);
        break;

      case 'k':
        moveCursorUp(appData, appCursors);
        break;

      case 'h':
        moveCursorLeft(appData, appCursors);
        break;

      case 'l':
        moveCursorRight(appData, appCursors);
        break;

      case 'g':
        gotoFirstLine(appData, appCursors);
        break;

      case 'G':
        gotoLastLine(appData, appCursors);
        break;

      case 'w':
        gotoNextWord(appData, windows, appCursors);

      case 'x':
        deleteCurrentPositionOnWindow(appData, windows, appCursors);
        break;

      case 'o':
        insertDownLine(appData, windows, appCursors);
        break;

      case 'O':
        insertUpLine(appData, windows, appCursors);
        break;

      case 'D':
        deleteCurrentLine(appData, windows, appCursors);
        break;

      case 'W':
        deleteWord(appData, windows, appCursors);
        break;

      case 't':
        gotoNextWindow(appData);
        break;

      case 'T':
        gotoBackWindow(appData);
        break;

    }
  } else if(mode == 1) {
    switch(input) {
      case '&':
        mode = 0;
        break;
      default:
        insertCharOnWindow(appData, windows, appCursors, input);
    }
  }
}

void parseInput(int appData[], char windows[][appData[1]][appData[2]], int appCursors[][2], char input[]) {
    parser(appData, windows, appCursors, input[0]);
}
