#include <windows.h>
#include <stdio.h>
#include <tchar.h>
DWORD dwc;
DWORD WINAPI thread_func(LPVOID lparam) {
	for (int i = 0; i < 10; i++) {
		printf("i = %d\n", i);
		Sleep(1000);
		
	}
	return 0;
}
int main() {


	DWORD thid;
	HANDLE hthread;
	HANDLE handle_array;
	hthread = CreateThread(NULL, 0, thread_func, NULL, 0, &thid);
	if (NULL == hthread) {
		printf("Unable to create a thread ERROR(%d)", GetLastError());
		getchar();
		return FALSE;

	}
	else {
		printf("thread is created\n");
	}

	handle_array = hthread;
	WaitForSingleObject(hthread, 6000);
	TerminateThread(hthread, dwc);
	GetExitCodeThread(hthread, &dwc);
	printf("Exit code for thread is %ld", dwc);
	CloseHandle(hthread);
	getchar();
	return 0;


}
