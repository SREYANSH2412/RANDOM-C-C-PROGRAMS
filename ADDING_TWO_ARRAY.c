#include<stdio.h>
int main()
{
    int a[10],b[10],c[10],n,i;
    printf("enter no. of elements:");
    scanf("%d",&n);
    printf("enter elements of array A:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter elements of array B:");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
        c[i]=a[i]+b[i];
    for(i=0;i<n;i++)
        printf("%d\t",c[i]);
}