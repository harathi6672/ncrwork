#include<iostream>
#include<Windows.h>
using namespace std;
int main() {
	char c = 'A';
	wchar_t a = L'H';
	int value1, value2;


	WCHAR w[] = L"harathi";
	CHAR  h[] = "kotipalli";

	//printf("%d\n", sizeof(c));
	//printf("%d\n", sizeof(a));
	//printf("%S\n", w);


	value1 = IsTextUnicode(h, strlen(h), NULL);
	if (0 == value1)
		cout << "char array is not unicode" << endl;
	else
		cout << "char array is unicode" << endl;

    value2 = IsTextUnicode(w, wcslen(w), NULL);
	cout << wcslen(w) << endl;
	if (0 == value2)
		cout << "wide array is not unicode" << endl;
	else
		cout << "wide array is unicode" << endl;


	//converting widechar to multibyte using below function
	int size1 = WideCharToMultiByte(CP_UTF8, 0, w, -1, NULL, 0, NULL, NULL);
	cout << size1 << endl;
	CHAR *wtoa = new CHAR[size1];
	
	WideCharToMultiByte(CP_UTF8, 0, w, -1, wtoa, size1, NULL, NULL);
	cout << "the multibyte code is" << wtoa << endl;
	DWORD n2 = GetLastError();
	cout << "error in wide array to multiarray= " << n2 << endl;

	//
	int size2 = MultiByteToWideChar(CP_UTF8, 0, h,-1,NULL,0);
	WCHAR *atow = new WCHAR;
	MultiByteToWideChar(CP_UTF8, 0, h, -1, atow, size2);
	wcout << "unicode is" << atow << endl;
	DWORD n1 = GetLastError();
	cout << "error in  multibytearray to widearray= " << n1 << endl;
}

