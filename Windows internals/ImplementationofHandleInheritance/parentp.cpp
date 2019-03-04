#include <windows.h>
#include <stdio.h>
#include <tchar.h>
int _tmain(int argc, LPTSTR argv[]) {
	
	//configuring security attributes
    SECURITY_ATTRIBUTES s1;
	ZeroMemory(&s1, sizeof(s1));
	s1.nLength = sizeof(s1);
	s1.lpSecurityDescriptor = NULL;
	s1.bInheritHandle = TRUE;

	//creating and opening a file
	HANDLE hFile;
	_tprintf(_T("filename %s\n"), argv[1]);
	hFile = CreateFile(argv[1],
		GENERIC_READ,
		0,
		&s1,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,
		NULL);


	if (hFile == INVALID_HANDLE_VALUE) {
		_tprintf(_T("create file ,Error(%ld)"), GetLastError());
		getchar();
		return FALSE;
	}


	_tprintf(_T("file is opened\n"));
	printf("handle of the file=%ld ", hFile);


	//child process
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));

	if (argc != 2)
	{
		printf("Usage: %s [cmdline]\n", argv[0]);
		return;
	}
	if (!CreateProcess(NULL, argv[1], NULL, NULL, TRUE, 0, NULL, NULL, &si, &pi)) {
		printf("CreateProcess1 failed (%d).\n", GetLastError());
		return;
	}
	else {
		printf("process1 is created \n");

	}
	WaitForSingleObject(pi.hProcess, INFINITE);
	CloseHandle(pi.hProcess);
}