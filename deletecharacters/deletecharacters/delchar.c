#include <stdio.h>
#include<string.h>
void any(char *a, char ch);

int main()
{
	char a[10];
	char ch;
	printf("Enter the String\n");
	scanf_s("%s", a);
	printf("Enter the character you want to remove\n");
	scanf_s("%c", &ch);
	any(a, ch);
	getch();
	return 0;

}
void any(char *a, char ch) {
	int i, j = 0;
	char b[10], ch1;
	int len = strlen(a);
	for (i = 0; i < len; i++) {
		if (a[i] != ch) {
			ch1 = a[i];
			b[j] = ch1;
			j++;

		}
	}
	b[j] = '\0';
	printf("%s\n", b);

}