#include<stdio.h>
#include<string.h>
int replace(char *);
int main() {
	char *cat;
	cat = (char*)malloc(20 * sizeof(char));
	strcpy(cat, "The Cat Sat");

	int n;
	n = replace(cat);
	printf("%d\n", n);
	return 0;
}
int replace(char * a) {
	int i, count = 0;
	int length = strlen(a);
	for (i = 0; i < length; i++) {
		if (a[i] == ' ') {
			a[i] = '-';
			count++;
		}
	}




	printf("%s\n", a);
	return count;



}
