#include <stdio.h>
int primeNumbers(int, int);

int main()
{
	int a, b;
	printf("enter range to print prime numbers\n");
	scanf_s("%d %d", &a, &b);
	//printf("%d",primeNumbers(a,b));
	while (a <= b) {
		int flag = 0;
		int i;

		for (i = 2; i <= a / 2; i++) {
			if (a % i == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			printf("%d ", a);
		a++;

	}
	getch();
	return 0;
}
