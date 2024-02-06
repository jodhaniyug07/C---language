#include<stdio.h>
int main()
{
    int a,b,c;

    printf("enter the a :");
    scanf("%d",&a);

    printf("enter the b :");
    scanf("%d",&b);

    c = b;
    b = a;
    a = c;

    printf("number 1 : %d and number 2 : %d",a,b);
}