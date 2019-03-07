#include<Windows.h>
#include<stdio.h>
#include<tchar.h>
int main() {
	HANDLE hevent = CreateEvent(NULL, FALSE, FALSE, TEXT("newevent"));
	//CloseHandle(hevent);
	 
	
	getchar();
	return 1;
}