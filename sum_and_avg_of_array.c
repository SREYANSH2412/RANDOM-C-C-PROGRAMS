#include<stdio.h>
int main()
{
    int num[100],sum=0,n,i;
    float avg;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    for(i=0;i<n;i++)
        sum=sum+num[i];
    avg=(float)sum/n;
    printf("sum=%d and average=%f",sum,avg);
}