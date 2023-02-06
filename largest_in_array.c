#include<stdio.h>
int main()
{
    int num[100],max,n,i;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    max=num[0];
    for(i=1;i<n;i++)
        {
            if(max<num[i])
            {
                max=num[i];
            }
        }
    printf("max is %d",max);
}