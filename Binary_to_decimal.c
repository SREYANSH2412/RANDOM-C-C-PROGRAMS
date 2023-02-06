#include<stdio.h>
#include<math.h>
int BintoDec(long int);
int i=0;
void main()
{
    long int num;
    int decimal;
    printf("Enter Binary number : ");
    scanf("%ld",&num);
    decimal=BintoDec(num);
    printf("Decimal number is : %d\n",decimal);
}
int BintoDec(long int a)
{
    if (a==0)
        return 0;
    else
        return a%10*pow(2,i++)+ BintoDec(a/10);
}