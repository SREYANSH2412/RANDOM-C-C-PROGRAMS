#include<stdio.h>
int main()
{
    int a[10],n,i,key,found;
    printf("enter no. of elements:");
    scanf("%d",&n);
    printf("enter elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter element to be searched:");
    scanf("%d",&key);
    found=-1;
    for(i=0;i<n;i++)
    {
        if (a[i]==key)
        {
            found=i;
            break;
        }
    }
    if(found==-1)
        printf("element is not found");
    else
        printf("element is found at %d",found+1);
}