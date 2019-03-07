#include<stdio.h>
#include<string.h>
int main() {
	char *str1 = NULL, *str2 = NULL;
	int length,i,j=0;
	printf("enter the length of the string\n");
	scanf_s("%d", &length);
	
	str1 = (char *)malloc(length+1 * sizeof(char));
	str2 = (char *)malloc(length +1* sizeof(char));
	printf("Enter string1\n");
	scanf_s("%s", str1, strlen(str1));
	for (i = length - 1;i >= 0;i--) {
		*(str2 + j) = *(str1 + i);
		j++;

	}
	*(str2 + j) = '\0';
	printf("%s\n", str2);
	getch();
	return 0;




}