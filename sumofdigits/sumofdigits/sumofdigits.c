#include<stdio.h>

int sumOfDigits(int);

int main() {

	int num;

	printf("Enter the number\n");

	scanf_s("%d", &num);

	printf("sum = %d\n", sumOfDigits(num));
	getch();

	return 0;

}

int sumOfDigits(int n) {

	int rem, sum = 0;

	while (n != 0) {

		rem = n % 10;

		sum += rem;

		n = n / 10;

	}

	return sum;

}
