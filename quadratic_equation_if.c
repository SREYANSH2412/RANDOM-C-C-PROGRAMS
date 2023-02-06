#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2,disc,real,imag;
    printf("enter coefficients:");
    scanf("%f %f %f",&a,&b,&c);
    if((a==0)&&(b==0))
    {
        printf("Invalid coefficients \n");
        printf("Try again with valid inputs");
    }
    else if (a!=0)
    {
        disc=b*b-4*a*c;
        if (disc==0)
        {
            root1=(-b+sqrt(disc))/(2*a);
            root2=(-b-sqrt(disc))/(2*a);
            printf("repeated roots are: %f,%f\n",root1,root2);
        }
        else if (disc>0)
        {
            root1=(-b+sqrt(disc))/(2*a);
            root2=(-b-sqrt(disc))/(2*a);
            printf("real roots are: %f,%f\n",root1,root2);
        }
        else
        {
            printf("The roots are real and imaginary\n");
            real=-b/(2*a);
            imag=sqrt(fabs(disc))/(2*a);
            printf("Root 1 = %f + i %f\n",real,imag);
            printf("Root 2 = %f - i %f\n",real,imag);
        }
        
    }
    else
    {
        printf("it is linear equation\n");
        root1=-c/b;
        printf("Root = %f\n",root1);
    }
}