#include<stdio.h>
void main()
{
    int m,n,p,q,i,j,k,a[10][10],b[10][10],c[10][10];
    printf("\n Enter the number of rows & columns of matrix A : ");
    scanf("%d%d",&m,&n);
    printf("\n Enter the number of rows & columns of matrix B : ");
    scanf("%d%d",&p,&q);
    if(n!=p)
    {
        printf("Matrix multiplication not possible as Columns of A not equal to Rows of B.\n");
    }
    else
    {
        printf("Enter elements for matrix A\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("Enter the element for A[%d][%d] : ",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter elements for matrix B\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("Enter the element for B[%d][%d] : ",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j]=0;
                for(k=0;k<n;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        printf("The Matrix A is : \n ");
        for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf(" %d \t",a[i][j]);
                }
                printf("\n ");
            }
        printf("The Matrix B is : \n ");
        for(i=0;i<p;i++)
            {
                for(j=0;j<q;j++)
                {
                    printf(" %d \t",b[i][j]);
                }
                printf("\n ");
            }
        printf("The multiplied Matrix C is :\n ");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf(" %d \t",c[i][j]);
            }
            printf("\n ");
        }
    }
}