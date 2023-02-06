#include<stdio.h>
int main()
{
    int num,rem,sum=0,x,temp;
    printf("enter no.:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        x=rem*rem*rem;
        sum=sum+x;
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("sum = %d\n",sum);
        printf("It is armstrong");
    }
    else
    printf("it is not armstrong");
}