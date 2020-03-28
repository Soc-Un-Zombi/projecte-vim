// Joan Francesc Pedro Garcia
#include "edth.h"

int main(int argc, char *argv[]){

	const int C_windows = 3;
	const int C_files = 5;
	const int C_columns = 15;

	int appData [4];
	appData [0] = C_windows;
	appData [1] = C_files;
	appData [2] = C_columns;
	appData [3] = 0;

	char windows [appData[0]] [appData[1]] [appData[2]];
	int appCursors [appData[0]] [2];
	iniWindows(appData, windows, appCursors);

	/*printCurrentWindow(appData, windows, appCursors);
	parseInput(appData, windows, appCursors, "jjliHola Mudno");
	printCurrentWindow(appData,windows,appCursors);
	parseInput(appData,windows,appCursors,"&hhhxlid");
	printCurrentWindow(appData,windows,appCursors);*/

	printCurrentWindow(appData,windows,appCursors);
	parseInput(appData, windows, appCursors, "jlkh");
	printCurrentWindow(appData,windows,appCursors);
	parseInput(appData, windows, appCursors, "jlkh");
	printCurrentWindow(appData,windows,appCursors);
	parseInput(appData, windows, appCursors, "jlkh");
	printCurrentWindow(appData,windows,appCursors);
	parseInput(appData, windows, appCursors, "iJ");
	printCurrentWindow(appData,windows,appCursors);
	parseInput(appData, windows, appCursors, "J");
	printCurrentWindow(appData,windows,appCursors);
	parseInput(appData, windows, appCursors, "o");
	printCurrentWindow(appData,windows,appCursors);
	parseInput(appData, windows, appCursors, "a");
	printCurrentWindow(appData,windows,appCursors);
	parseInput(appData, windows, appCursors, "n");
	printCurrentWindow(appData,windows,appCursors);

}
