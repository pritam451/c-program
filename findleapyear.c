#include <stdio.h>
int main ()
{
    int a;
    printf("Enter the year to check the year is leap year or not:");
    scanf("%d",&a);
    a%4==0?
    printf("it is a leap year"):printf("it is not a leap year");
   return 0;
}