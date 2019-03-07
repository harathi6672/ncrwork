#include <windows.h>
#include <stdio.h>
#include <tchar.h>
void _tmain(int argc, TCHAR *argv[]) {
	SECURITY_ATTRIBUTES s1;
	ZeroMemory(&s1, sizeof(s1));

	s1.nLength = sizeof(s1);
	s1.lpSecurityDescriptor = NULL ;
	s1.bInheritHandle = TRUE;

	HANDLE hevent = CreateEvent(&s1, FALSE, FALSE, TEXT("sample"));
	printf("handle of hevent is %ld \n",hevent);

	if (NULL == hevent)
		printf("event creation is unsuccessful Error[%d]\n", GetLastError());
	else
		printf("successfully created\n");

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
		printf("Handle inherited = %ld ", );

	}


}