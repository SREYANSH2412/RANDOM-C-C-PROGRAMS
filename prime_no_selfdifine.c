#include<stdio.h>
int isprime(int num)
{
    int i;
    if(num==0 || num==1)
        return 0;
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}

void main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(isprime(n))
        printf("%d is prime number",n);
    else
        printf("%d is not prime number",n);
}
