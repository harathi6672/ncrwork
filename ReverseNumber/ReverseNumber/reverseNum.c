#include <stdio.h>
int reverseNum(int);

int main()
{
	int num;
	printf("enter a number to reverse\n");
	scanf_s("%d", &num);
	printf("%d", reverseNum(num));
	getch();
	return 0;
}
int reverseNum(int n) {
	int rem, rev = 0;
	while (n != 0) {
		rem = n % 10;
		rev = rev * 10 + rem;
		n /= 10;
	}
	return rev;
}
