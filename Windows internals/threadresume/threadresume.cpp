#include <windows.h>
#include <stdio.h>
#include <tchar.h>
DWORD WINAPI thread_func(LPVOID lparam) {
	for (int i = 0; i < 1000; i++) {
		printf("i = %d\n", i);
		Sleep(1000);
	}
	return 0;
}
int main() {


	DWORD thid;
	HANDLE hthread;
	HANDLE handle_array;
	hthread = CreateThread(NULL, 0, thread_func, NULL, CREATE_SUSPENDED, &thid);
	if (NULL == hthread) {
		printf("Unable to create a thread ERROR(%d)", GetLastError());
		getchar();
		return FALSE;

	}
	else {
		printf("thread is created\n");
	}
	Sleep(5000);
	ResumeThread(hthread);
	handle_array = hthread;
	CloseHandle(hthread);
	getchar();
	return 0;


}
