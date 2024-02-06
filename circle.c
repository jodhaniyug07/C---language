#include<stdio.h>
int main()
{
    float pie=3.14;
    int radius;

    printf("enter the radius :");
    scanf("%d",&radius);

    float area = (float) (pie * radius * radius);

    printf("the area of circle is %f",area);
}