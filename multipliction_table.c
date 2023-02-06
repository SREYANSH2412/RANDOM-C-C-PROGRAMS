#include<stdio.h>
int main()
{
    int n,i,tab;
    printf("enter no.");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
        tab=i*n;
        printf("%d x %d = %d\n",n,i,tab);
        i++;
    }
}