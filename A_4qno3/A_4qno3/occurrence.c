#include<stdio.h>

int main() {

	char *s[] = { "we will teach you how to","Move a mountain","“Level a building","Erase the past","Make a million" };

	//printf("%s\n",*s);

	int count = 0, i, j;



	for (i = 0; i < 5;i++) {

		char *a = *(s + i);

		for (j = 0;a[j] != '\0'; j++) {

			if (a[j] == 'e') {

				count++;

			}

		}

	}

	printf("count = %d\n", count);

	return 0;




}