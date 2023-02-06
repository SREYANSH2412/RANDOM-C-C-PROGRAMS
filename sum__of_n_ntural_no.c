#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("enter no.:");
    scanf("%d",&n);
    i=1;
    sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("sum= %d",sum);
}
