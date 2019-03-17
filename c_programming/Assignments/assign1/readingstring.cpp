#include<stdio.h>
#include<string.h>
int main() {
	char text[80];
	int i;
	printf("enter the sentence\n");
	scanf_s("%[^\n]s",text);
	printf("%s", text);

}