#include<stdio.h>
int main()
{
    int num[10],n, key, i, low, high, mid, success=0;
    printf("\n Enter number of elements\n");
    scanf("%d",&n);
    printf("\n Enter elements one by one in descending order \n");
    for(i=0; i<n; i++)
        scanf("%d", &num[i]);
    printf("\n Enter the element to be searched\n");
    scanf("%d", &key);
    low=(n-1);
    high=0;
    while (high<=low)
    {
        mid=(low+high)/2;
        if (key==num[mid])
        {
            success=1;
            break;
        }
        else if (key<num[mid])
            high=mid+1;
        else
            low=mid-1;
    }
    if (success==1)
        printf("%d found at %d position", key, (mid+1));
    else
        printf("%d is not found", key);
}