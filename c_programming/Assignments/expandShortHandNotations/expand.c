#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * expand(char*, char*);

int main() {
	char *s1 = NULL, *s2 = NULL;
	int len1,len2;
	
	printf_s("Enter the length of the input string\n");
	scanf_s("%d", &len1);
	printf_s("Enter the length of the output string\n");
	scanf_s("%d", &len2);
	
	s1 = (char*)malloc(len1 * sizeof(char));
	s2 = (char*)malloc(len2 * sizeof(char));
	printf_s("enter the shorthand notation\n");
	scanf_s("%s", s1, strlen(s1));
	s2 = expand(s1, s2);

	printf_s("Expanded notation = %s",s2);

	getch();

	
	return 0;
}

char *expand(char *s1,char *s2) {
	int i, j, c;
	j = 0;

	for (i = 0; s1[i] != '\0';i++) {
		if (s1[i] == '-') {
			for (c = s1[i - 1] + 1; c < s1[i + 1];c++) {
				s2[j] = c;
				j++;
				
			}
		}
		else {
			s2[j] = s1[i];
			j++;
		}
	}
	s2[j] = '\0';

	return s2;

	}
	
	
	