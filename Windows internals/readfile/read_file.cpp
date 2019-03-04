
#include<Windows.h>
//#include<iostream>
#include <stdio.h>
#include<tchar.h>
//using namespace std;
#define BUFFSIZE 100


int _tmain(int argc, LPTSTR argv[]) {
	HANDLE hFile;
	TCHAR buffer[BUFFSIZE];

	if (argc != 2) {
		_tprintf(_T("Useage file"));
		getchar();
		return FALSE;

	}
	
	_tprintf(_T("filename %s\n"), argv[1]);

	hFile = CreateFile(argv[1], 
		GENERIC_READ, 
		0, 
		NULL, 
		OPEN_EXISTING, 
		FILE_ATTRIBUTE_NORMAL, 
		NULL);
	//cout << hFile << endl;


	if (hFile == INVALID_HANDLE_VALUE) {
		_tprintf(_T("create file ,Error(%ld)"), GetLastError());
		getchar();
		return FALSE;
	}


	_tprintf(_T("file is opened"));
	
	
	DWORD nbr;
	ZeroMemory(buffer, BUFFSIZE);
	BOOL ret = ReadFile(hFile, buffer, BUFFSIZE, &nbr, NULL);
	if (ret == 0) {
		_tprintf(_T("cant read,error(%d)", GetLastError()));
		getchar();
		return FALSE;
	}
	CloseHandle(hFile);
	_tprintf(_T("Text from (%s) %S \n"), argv[1], buffer);
	getchar();
	return TRUE;


}