#include <stdio.h>
void main()
{
    int marks[10],n,i;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&marks[i]);
    printf("Array elements are:");
    //for(i=0;i<n;i++)
        //printf("%d\t",marks[i]);
    i=0;
    while(i<n)
    {
        printf("%u is %d\t",&marks[i],marks[i]);              //%u is address
        i++;
    }
}