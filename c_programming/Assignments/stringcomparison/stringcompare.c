#include<stdio.h>
#include<string.h>
int main() {
	char *string1 = NULL, *string2 = NULL;
	int len1, len2, i, j = 0;
	printf("enter the length of string1 and string2\n");
	scanf_s("%d %d", &len1, &len2);

	string1 = (char *)malloc(len1 + len2 + 1 * sizeof(char));
	string2 = (char *)malloc(len2 + 1 * sizeof(char));
	printf("Enter string1\n");
	scanf_s("%s", string1, strlen(string1));
	printf("Enter string2\n");
	scanf_s("%s", string2, strlen(string2));
	while(*string1 == *string2) {
		if (*string1 == '\0')
			printf("both strings are same\n");
			return 0;
		string1++;
		string2++;

	
	}
	if ((*string1 - *string2) > 0)
		return 1;
	else
		return -1;


	getch();
	return 0;
}


