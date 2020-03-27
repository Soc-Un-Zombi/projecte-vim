// Joan Francesc Pedro Garcia
#include "edth.h"

int main(int argc, char *argv[]){

	int appData [4];
	iniappData(appData);

	char windows [appData[0]] [appData[1]] [appData[2]];
	int appCursors [appData[0]] [2];
	iniWindows(appData, windows, appCursors);



	return 0;
}
