#include <stdio.h>
int binaryToDecimal(long int);



int main()
{
	long int a;
	printf("enter a binary number");
	scanf_s("%ld", &a);
	printf("%d", binaryToDecimal(a));

	getch();
	return 0;
}
int binaryToDecimal(long int n) {
	int decimal_num = 0, i = 0, rem;
	while (n != 0) {
		rem = n % 10;
		decimal_num += rem * pow(2, i);
		n /= 10;
		++i;

	}
	return decimal_num;
}
