// Joan Francesc Pedro Garcia
#include "edth.h"

int main(){

	int appData [4];
	appData[0] = 3;
	appData[1] = 8;
	appData[2] = 8;
	appData[3] = 1;
	char windows [appData[0]] [appData[1]] [appData[2]];
	int appCursors [appData[0]] [2];

	iniEmptyArray(appData[2], windows[appData[3]][5]);
	putCharOnArray(appData[2], windows[appData[3]][5], 5, 'D');
	printArray(appData[2], windows[appData[3]][5]);
	shiftRightArray(appData[2], windows[appData[3]][5], 5);
	printArray(appData[2], windows[appData[3]][5]);
	shiftLeftArray(appData[2], windows[appData[3]][5], 7);
	printArray(appData[2], windows[appData[3]][5]);

	return 0;
}
