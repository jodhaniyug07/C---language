#include<stdio.h>
int main()
{
    int a,b;

    printf("enter the a :");
    scanf("%d",&a);

    printf("enter the b :");
    scanf("%d",&b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("number 1 : %d and number 2 : %d",a,b);
}