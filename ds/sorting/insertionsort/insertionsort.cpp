#include<iostream>
using namespace std;

void insertionSort(int a[], int n) {
	int i, j;

	for (i = 1; i <= n - 1;i++) {
		int temp;
		j = i - 1;
		temp = a[i];

		while (j >= 0 && a[j] > temp) {
			a[j + 1] = a[j];
			j--;

		}
		a[j + 1] = temp;

	}

}

void display(int a[], int n) {
	int i;
	for (i = 0; i < n;i++) {
		cout << a[i] << " ";
	}

}
int main() {
	int a[] = { 1,14,4,21,3,15,31,7,6 };
	int n = sizeof(a) / sizeof(a[0]);
	insertionSort(a, n);
	cout << "sorted array is" << endl;
	display(a, n);
	return 0;



}
