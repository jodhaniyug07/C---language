#include<stdio.h>
int main()
{
    float height,base;

    printf("enter the height :");
    scanf("%f",&height);

    printf("enter the base :");
    scanf("%f",&base);

    float area = height * base/2;

    printf("the area of triangle is %f",area);
}