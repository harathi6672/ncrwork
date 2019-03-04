#include<Windows.h>
#include<stdio.h>
#include<tchar.h>
#define BUFFSIZE 100

int _tmain(int argc, LPTSTR argv[]) {
	HANDLE hFile;
	TCHAR buffer[BUFFSIZE] = L"Hello from Windows";
	if (argc != 2) {
		_tprintf(_T("Useage file"));
		getchar();
		return FALSE;

	}


	hFile = CreateFile(argv[1],
		GENERIC_WRITE,
		0,
		NULL,
		CREATE_ALWAYS,
		FILE_ATTRIBUTE_NORMAL,
		NULL);


	if (hFile == INVALID_HANDLE_VALUE) {
		_tprintf(_T("create file ,Error(%ld)"), GetLastError());
		getchar();
		return FALSE;
	}
	_tprintf(_T("file is opened"));

	DWORD dwnbw;
	//ZeroMemory(buffer, BUFFSIZE);
	BOOL ret = WriteFile(hFile, buffer, sizeof(buffer), &dwnbw, NULL);
	if (ret == 0) {
		_tprintf(_T("cant write,error(%d)", GetLastError()));
		getchar();
		return FALSE;
	}
	CloseHandle(hFile);
	_tprintf(_T("Contents of file(%s)\n",argv[1]);
	printf("%S\n", buffer);
	getchar();
	return TRUE;
}
