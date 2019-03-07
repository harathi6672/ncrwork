#include<iostream>
using namespace std;

void selectionSort(int a[], int n) {
	int i, j;

	for (i = 0; i < n - 1;i++) {
		int loc = i, j = i + 1;


		while (j <= n - 1) {
			if (a[j] < a[loc])
				loc = j;
			j++;

		}
		swap(a[i], a[loc]);


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
	selectionSort(a, n);
	cout << "sorted array is" << endl;
	display(a, n);
	return 0;



}
