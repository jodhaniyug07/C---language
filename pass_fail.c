#include<stdio.h>
int main()
{
    int a,b,c,total;
    float per;

    printf("enter the marks of a :");
    scanf("%d",&a);

    printf("enter the marks of b :");
    scanf("%d",&b);

    printf("enter the marks of c :");
    scanf("%d",&c);

    total=a+b+c;

    printf("total is %d\n",total);

    per=total*100/300;

    printf("percentage is %f\n",per);

    if(per > 33)

    printf("congratulations you are pass");

    else

    printf("sorry you are fail");
}