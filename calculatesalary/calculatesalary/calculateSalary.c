#include<stdio.h>

int main() {

	int basic;

	printf("Enter your basic salary\n");

	scanf_s("%d", &basic);

	int HRA, DA;

	if (basic >= 1 && basic <= 4000) {

		HRA = 0.1*basic;

		DA = 0.5*basic;

		printf("Gross Salary = %d\n", basic + HRA + DA);

	}

	if (basic >= 4001 && basic <= 8000) {

		HRA = 0.2 * basic;

		DA = 0.6 * basic;

		printf("Gross Salary = %d\n", basic + HRA + DA);

	}

	if (basic >= 8001 && basic <= 12000) {

		HRA = 0.25*basic;

		DA = 0.7*basic;

		printf("Gross Salary = %d\n", basic + HRA + DA);

	}

	if (basic >= 12001) {

		HRA = 0.3*basic;

		DA = 0.8*basic;

		printf("Gross salary = %d\n", basic + HRA + DA);

	}

	return 0;
	getch();

}
