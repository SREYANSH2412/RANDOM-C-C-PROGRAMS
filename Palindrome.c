//Program to find reverse of a number and check whether it is palindrome or not.
#include<stdio.h>
void main( )
{
    int temp,rev=0,a,rem;
    printf("\nEnter the no. : ");
    scanf("%d",&a);
    temp=a;
    while(a!=0)
    {
        rem=a%10;
        a=a/10;
        rev=(rev*10)+rem;
    }
    printf("The reverse of %d is %d\n", temp, rev);
    if(rev==temp)
    printf("The no. is palindrome\n");
    else
    printf("The no. is not palindrome\n");
}