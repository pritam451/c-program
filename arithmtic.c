#include<stdio.h>
int main()
{
    int a,b,sum,sub,milti,div;
    printf("Enter the first no");
    scanf("%d",&a);
    printf("Enter the second no");
    scanf("%d",&b);
    sum=a+b;
    printf("The sum of two no %d\n",sum);
    sub=a-b;
    printf("The sub of two no %d\n",sub);
    milti=a*b;
    printf("The milti of two no %d\n",milti);
    div=a/b;
    printf("The div of two no %d\n",div);
    return 0;
}