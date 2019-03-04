#include <windows.h>
#include <stdio.h>
#include <tchar.h>
DWORD WINAPI thread_func(LPVOID lparam) {
	printf("current thread");

	return 0;
}
int main() {
	printf("%d\n", GetPriorityClass(GetCurrentProcess()));
	SetPriorityClass(GetCurrentProcess(), BELOW_NORMAL_PRIORITY_CLASS);
	printf("%d\n", GetPriorityClass(GetCurrentProcess()));


	DWORD thid;
	HANDLE hthread;
	//HANDLE handle_array[2];
	hthread = CreateThread(NULL, 0, thread_func, NULL, 0, &thid);
	if (NULL == hthread) {
		printf("Unable to create a thread ERROR(%d)", GetLastError());
		getchar();
		return FALSE;

	}
	else {
		printf("thread is created");
	}
	BOOL ret = SetThreadPriority(hthread, THREAD_PRIORITY_LOWEST);
	if (ret != 0) {
		printf("priority is set and value is %ld\n ", GetThreadPriority(hthread));
	}
	else {
		printf("priority is not set Error(%d)", GetLastError());
		//handle_array[0] = hthread;
		CloseHandle(hthread);
		getchar();
		return 0;


	}
}