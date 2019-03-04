#include <windows.h>
#include <stdio.h>
#include <tchar.h>
void _tmain(int argc, TCHAR *argv[]) {
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
	if (!CreateProcess(NULL, argv[1], NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi)) {
		printf("CreateProcess1 failed (%d).\n", GetLastError());
		return;
	}
	else {
		printf("process1 is created \n");

	}
	printf("currentprocess id = %ld\n", GetCurrentProcessId());
	printf("currentthread id = %ld\n", GetCurrentThreadId());
	printf( "Process id = %ld\n", GetProcessId(pi.hProcess));
	printf("Thread id = %ld\n", GetThreadId(pi.hThread));
	printf("ProcessId of specified thread = %ld\n", GetProcessIdOfThread(pi.hThread));


	WaitForSingleObject(pi.hProcess, INFINITE);
	CloseHandle(pi.hProcess);







	//printf("%d",)





}