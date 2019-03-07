#include <windows.h>
#include <stdio.h>
#include <tchar.h>

void _tmain(int argc, TCHAR *argv[])
{
	STARTUPINFO si1,si2;
	PROCESS_INFORMATION pi1,pi2;

	ZeroMemory(&si1, sizeof(si1));
	ZeroMemory(&si2, sizeof(si2));
	si1.cb = sizeof(si1);
	si2.cb = sizeof(si2);
	ZeroMemory(&pi1, sizeof(pi1));
	ZeroMemory(&pi2, sizeof(pi2));

	/*if (argc != 2)
	{
		printf("Usage: %s [cmdline]\n", argv[0]);
		return;
	}*/

	// Start the child process. 
	if (!CreateProcess(NULL,   // No module name (use command line)
		argv[1],        // Command line
		NULL,           // Process handle not inheritable
		NULL,           // Thread handle not inheritable
		FALSE,          // Set handle inheritance to FALSE
		0,              // No creation flags
		NULL,           // Use parent's environment block
		NULL,           // Use parent's starting directory 
		&si1,            // Pointer to STARTUPINFO structure
		&pi1)           // Pointer to PROCESS_INFORMATION structure
		)
	{
		printf("CreateProcess1 failed (%d).\n", GetLastError());
		return;
	}
	else {
		printf("process1 is created \n");
	}
	printf("Handle of process1 %d\n", pi1.hProcess);
	printf("Process1 id is %d\n", pi1.dwProcessId);




	if (!CreateProcess(NULL,   // No module name (use command line)
		argv[2],        // Command line
		NULL,           // Process handle not inheritable
		NULL,           // Thread handle not inheritable
		FALSE,          // Set handle inheritance to FALSE
		0,              // No creation flags
		NULL,           // Use parent's environment block
		NULL,           // Use parent's starting directory 
		&si2,            // Pointer to STARTUPINFO structure
		&pi2)           // Pointer to PROCESS_INFORMATION structure
		)
	{
		printf("CreateProcess2 failed (%d).\n", GetLastError());
		return;
	}
	else {
		printf("process2 is created \n");
	}
	printf("Handle of process2 %d\n", pi2.hProcess);
	printf("Process2 id is %d\n", pi2.dwProcessId);




	// Wait until child process exits.
	WaitForSingleObject(pi1.hProcess, INFINITE);
	WaitForSingleObject(pi2.hProcess, INFINITE);

	// Close process and thread handles. 
	CloseHandle(pi1.hProcess);
	CloseHandle(pi2.hProcess);
	CloseHandle(pi1.hThread);
	CloseHandle(pi2.hThread);
}