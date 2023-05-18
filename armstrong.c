#include <stdio.h>
#include <math.h>

int main() 
{
    int n, a, remainder, result = 0;
    printf("Armstrong numbers between 1 to 100:\n");
    for(n = 1; n<= 100; n++) {
        a = n;
        while (a!= 0) 
        {
            remainder = a% 10;
            result += pow(remainder, 3);
            a /= 10;
        }
        if (result == n) {
            printf("%d ", n);
        }
    }
    return 0;
}
