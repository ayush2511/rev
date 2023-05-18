#include<stdio.h>

int main() {
    int n, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) 
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    printf("The reverse of the given number is %d.\n", rev);
    return 0;
}