#include <windows.h>
#include <stdio.h>
#include <tchar.h>
long g_x = 0;
DWORD WINAPI thread_func(LPVOID lparam) {
	g_x++;
	return 0;
}
int main() {
	DWORD thid1, thid2;
	HANDLE hthread1, hthread2;
	HANDLE handle_array[2];
	while (1) {
		g_x = 0;

		hthread1 = CreateThread(NULL, 0, thread_func, NULL, 0, &thid1);
		if (NULL == hthread1) {
			printf("Unable to create a thread1 ERROR(%d)", GetLastError());
			getchar();
			return FALSE;
		}
		handle_array[0] = hthread1;
		CloseHandle(hthread1);

		hthread2 = CreateThread(NULL, 0, thread_func, NULL, 0, &thid2);
		if (NULL == hthread2) {
			printf("Unable to create a thread2 ERROR(%d)", GetLastError());
			getchar();
			return FALSE;
		}
		handle_array[0] = hthread2;
		CloseHandle(hthread2);
		printf()
	}
}



