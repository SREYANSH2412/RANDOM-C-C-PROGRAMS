#include<stdio.h>
int main()
{
    int num[10],n,i,j,temp;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    for (i=0;i<n;i++)
    {
        for(j=0; j<n-i-1;j++)
        {
            if(num[j] <num [j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    printf("\n Sorted elements are");
    for (i=0;i<n;i++)
        printf("\n%d", num[i]);
}