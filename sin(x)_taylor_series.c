#include <stdio.h>
#include <math.h>
#define pi 3.142
void main()
{
    int i,degree;
    float x,sum=0,term,nume,deno;
    printf("\n Enter the value of degree : ");
    scanf("%d", &degree);
    x=degree*(pi/180);
    nume=x;
    deno=1;
    i=2;
    do
    {
        term=nume/deno;
        nume=-nume*x*x;
        deno=deno*i*(i+1);
        sum=sum+term;
        i=i+2;
    }while(fabs(term)>=0.00001);
    printf("\n The sine of %d is %f",degree,sum);
    printf("\n The sine of %d using inbuilt function sin(%d) is %f",degree,degree,sin(x));
}