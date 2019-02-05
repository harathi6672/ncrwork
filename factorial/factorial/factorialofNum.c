#include <stdio.h>
int factorial(int);

int main()
{
	int num;
	printf("enter a number to find factorial\n");
	scanf_s("%d", &num);
	printf("%d", factorial(num));
	getch();
	return 0;
}
int factorial(int n) {
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);

}
