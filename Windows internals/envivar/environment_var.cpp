#include<iostream>
#include<Windows.h>
#include<tchar.h>
using namespace std;
void DumpEnvStrings(PTSTR pEnvBlock[]) {
	int curr = 0;
	PTSTR *pelement = (PTSTR *)pEnvBlock;
	PTSTR pCurrent = NULL;
	while (pelement != NULL) {
		pCurrent = (PTSTR)(*pelement);
		if (pCurrent == NULL) {
			pelement = NULL;
		}
		else {
			_tprintf(TEXT("[%u]%s\n\n"), curr, pCurrent);
			curr++;
			pelement++;
		}
	}
}
int _tmain(int argc, TCHAR *argv[], TCHAR *env[]) {
	DumpEnvStrings(env);
	TCHAR envVarString0[] = TEXT("%SystemRoot%");
	//TCHAR envVarString1[] = TEXT("%Windir%");
	//TCHAR envVarString2[] = TEXT("%User%");
	TCHAR buffer[MAX_PATH];
	DWORD ret;
	ret = ExpandEnvironmentStrings(envVarString0, buffer, MAX_PATH);
	if (!ret) {
		cout << GetLastError() << endl;


	}
	else
		cout << buffer << endl;
}
