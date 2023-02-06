#include<stdio.h>
#include<math.h>
void main()
{
    float a[10], *ptr, mean, sd, sum=0, sumsd=0;
    int n,i;
    printf("Enter no of elements : ");
    scanf("%d",&n);
    printf("Enter array elements : ");
    for(i=0;i<n;i++)
        scanf("%f",&a[i]);
    ptr=a;
    for(i=0;i<n;i++)
    {
        sum=sum+ *ptr;
        ptr++;
    }
    mean=sum/n;
    ptr=a;
    for(i=0;i<n;i++)
    {
        sumsd=sumsd + pow((*ptr - mean),2);
        ptr++;
    }
    sd= sqrt(sumsd/n);
    printf("\nSum = %f\n",sum);
    printf("Mean = %f\n",mean);
    printf("Standard deviation = %f\n",sd);
}