#include<stdio.h>
void main()
{
    char name[20];
    int n;
    float amount;
    printf("Enter the consumer name\n");
    scanf("%s", name);
    printf("Enter no. of units consumed \n");
    scanf("%d",&n);
    if (n<=200)
        amount=n*0.8;
    else if(n>200 && n<=300)
        amount=200 *0.8+(n-200)*0.9;
    else
        amount=(200*0.8)+(100*0.9)+(n-300)*1;
    amount=amount+100; // Additional 100 Rupees to be added
    if(amount>400)
        amount=amount+amount*15/100;
    printf("Total amount to be paid is %.2f Rs\n",amount);
}