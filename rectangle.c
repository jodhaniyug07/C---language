#include<stdio.h>
int main()
{
    int width,length;

    printf("enter the width :");
    scanf("%d",&width);

    printf("enter the length :");
    scanf("%d",&length);

   int area = width * length;

    printf("the area of rectangle is %d",area);
}