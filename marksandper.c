#include <stdio.h>
int main()
{ 
    int marks[5],s=0,i;
    float percentage;
    printf("enter the marks of 5 sub");
    for (i=0;i<5;i++)
    {
        printf("%d",i+1);
        scanf("%d",&marks[i]);
        s += marks[i];
    }
    percentage = s/5;
    printf("sum is %d",s);
    printf("percentage is %f",percentage);
    return 0;
}
