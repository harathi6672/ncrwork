#include<stdio.h>
#include<string.h>
int main() {
	char *string1=NULL, *string2=NULL;
	int len1, len2;
	printf("enter the length of string1 and string2\n");
	scanf_s("%d %d", &len1, &len2);

	string1 = (char *)malloc(len1 * sizeof(char));
	string2 = (char *)malloc(len2 * sizeof(char));
	printf("Enter string1\n");
	scanf_s("%s", string1,strlen(string1));
	/*printf("Enter string2\n");
	scanf_s("%s", string2,strlen(string2));*/
	int i = 0;
	while (*(string1+i)) {
		*(string2+i) = *(string1+i);
		i++;
	}
	*(string2+i) = '\0';
	printf("string2 is %s", string2);
	getch();
	return 0;

	




}