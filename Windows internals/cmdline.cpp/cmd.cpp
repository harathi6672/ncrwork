#include<iostream>
#include<Windows.h>
using namespace std;
int main() {
	int nArgs, i;

	LPTSTR* szArglist;
	szArglist = CommandLineToArgvW(GetCommandLineW(), &nArgs);
	if (szArglist == NULL)
		wcout << "commandline is empty" << endl;
	else
		for (i = 0; i < nArgs;i++) {
			wcout << szArglist[i] << endl;

		}
	return 0;
}







