#include<stdio.h>
int main()
{
    char name[15];
    int n;
    float amt;
    printf("ENTER NAME OF CONSUMER:\n");
    gets(name);
    printf("ENTER UNITS CONSUMED:\n");
    scanf("%d",&n);
    if(n<=200)
    {
        amt=n*0.80;
    }
    else if(n>200 && n<=300)
    {
        amt=0.8*200+(n-200)*0.9;
    }
    else
    {
        amt=(200*0.8)+(100*0.9)+(n-300)*1;
    }
    amt=amt+100;
    if(amt>400)
        amt=amt+amt*15/100;
    printf("Amount to be paid=%f",amt);
}