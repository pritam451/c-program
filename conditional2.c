#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter the first no");
    scanf("%d",&a);
    printf("Enter the second no");
    scanf("%d",&b);
    printf("enter the third no");
    scanf("%d",&c);
    a>b&&a>c?printf("a is greater"):b>a&&b>c?printf("b is greater"):printf("c is greater");
    return 0;
}