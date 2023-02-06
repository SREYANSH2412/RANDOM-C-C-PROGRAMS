#include<stdio.h>
int main()
{
    int a[10],i,n;
    printf("enter elements:");
    scanf("%d",&n);
    printf("enter elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("reversed array is:");
    for(i=n-1;i>=0;i--)
        printf("%d\t",a[i]);
}