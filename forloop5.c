#include<stdio.h>
int main()
{
    int rows=4,i,j;
    int n='A';

    for(i=0;i<=rows;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",n++);
        }
        printf("\n");
    }
    return 0;
}