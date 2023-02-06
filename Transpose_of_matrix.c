#include<stdio.h>
int main()
{
    int a[10][10],sum=0,n,m,i,j;
    float avg;
    printf("order of matrix:");
    scanf("%d %d",&m,&n);
    printf("enter array element:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Transpose\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}