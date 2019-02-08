#include<stdio.h>
int decToBin(int);
int main() {
    int n;
    printf("enter a decimal number");
    scanf("%d",&n);
    printf("%d",decToBin(n));
}
int decToBin(int num) {
    int r,binary_num = 0,i = 1;
    while(num != 0) {
        r= num % 2;
        binary_num += r*i;
        num /= 2;
        i *= 10;
    }
    return binary_num;
}


