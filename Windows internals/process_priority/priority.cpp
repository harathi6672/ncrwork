#include <windows.h>
#include <stdio.h>
#include <tchar.h>

void _tmain(int argc, TCHAR *argv[])
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;

	ZeroMemory(&si, sizeof(si));
	
	si.cb = sizeof(si);

	ZeroMemory(&pi, sizeof(pi));
	

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
		HIGH_PRIORITY_CLASS,              // No creation flags
		NULL,           // Use parent's environment block
		NULL,           // Use parent's starting directory 
		&si,            // Pointer to STARTUPINFO structure
		&pi)           // Pointer to PROCESS_INFORMATION structure
		)
	{
		printf("CreateProcess1 failed (%d).\n", GetLastError());
		return 0;
	}
	else {
		printf("process1 is created \n");
	}
	BOOL return_value = SetPriorityClass(pi.hThread, HIGH_PRIORITY_CLASS);
	if (return_value = 0) {
		printf("priority is not set");
	}
	else {
		printf("priority is set");
	}

	



	

	// Close process and thread handles. 
	CloseHandle(pi.hProcess);
	getchar();
	return 0;

}