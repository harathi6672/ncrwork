#include<Windows.h>
#include<stdio.h>
#include"demo.h"
int main() {
	int var1 = 20, var2 = 30;
	printf("addition of two numbers is %d", add(var1, var2));
	printf("difference of two numbers is %d", sub(var1, var2));
}