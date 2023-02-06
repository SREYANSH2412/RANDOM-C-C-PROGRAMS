#include<stdio.h>
int main()
{
    int num[100],min,n,i;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    min=num[0];
    for(i=1;i<n;i++)
        {
            if(min>num[i])
            {
                min=num[i];
            }
        }
    printf("min is %d",min);
}