#include<stdio.h>
void arrange(int, int);
void printArray(int, int);
int main() {
	int a[] = { -12,11,-13,-5,6,-7,5,-3,-6 };
	int n = sizeof(a) / sizeof(a[0]);
	arrange(a, n);
	printArray(a, n);
	getch();
	return 0;

}
void arrange(int a[], int n) {
	int i;
	int j = 0;
	for (i = 0;i < n; i++) {
		if ( a[ i ] < 0) {
			if (i != j) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			j++;


		}
	}
}
void printArray(int a[] , int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);

	}
 }