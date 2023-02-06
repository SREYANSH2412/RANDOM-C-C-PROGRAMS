#include<stdio.h>
int main()
{
    int op;
    float a,b,res;
    printf("Simple calculator\n");
    printf("*****************************\n");
    printf("enter 2 nos.:");
    scanf("%f %f",&a,&b);
    printf("******************************\n");
    printf("1-addition\n2-subtraction\n3-multiplication\n4-division\n5-Exit\n");
    printf("choose which operation you want to perform: \n");
    scanf("%d",&op);
    printf("******************************\n");
    if (op==1)
    {
        res=a+b;
        printf("%f + %f = %f",a,b,res);
        
    }
    else if (op==2)
    {
        res=a-b;
        printf("%f - %f = %f",a,b,res);
        
    }
    else if (op==3)
    {
        res=a*b;
        printf("%f * %f = %f",a,b,res);
        
    }
    else if (op==4)
    {
        if (b!=0)
        {
            res=a/b;
            printf("%f/%f = %f",a,b,res);
        }
        else
        {
            printf("denominator is zero ERROR!!!!!!!!\nExiting............");
        }
    }
    else
    {
        printf("Exiting.........");
    }
}
