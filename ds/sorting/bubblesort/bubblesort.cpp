#include<iostream>
using namespace std;

void bubbleSort(int a[], int n) {
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1;i++) {
		swapped = false;
		for (j = 0;j < n - 1 - i;j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				swapped = true;
			}

		}
		if (swapped == false)
			break;
	}

}

void display(int a[], int n) {
	int i;
	for (i = 0; i < n ;i++) {
		cout <<  a[i] << " " ;
	}

}

int main() {
	int a[] = { 1,14,4,21,3,15,31,7,6 };
	int n = sizeof(a) / sizeof(a[0]);
	bubbleSort(a, n);
	cout << "sorted array is" << endl;
	display(a, n);
	return 0;



}
