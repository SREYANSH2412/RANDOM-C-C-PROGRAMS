#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter no.:");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping no. are:%d %d",a,b);
}