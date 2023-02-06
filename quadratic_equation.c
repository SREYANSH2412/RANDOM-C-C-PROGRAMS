#include<stdio.h>
#include<math.h>
void main()
{ 
    float a,b,c,disc,root1,root2,real,imag;
    printf("Enter values for coefficients [a,b,c] : ");
    scanf("%f %f %f",&a,&b,&c);
    if((a==0)&&(b==0))
    {
        printf("Invalid coefficients \n");
        printf("\n Try again with valid inputs");
    }
    else if(a==0)
    {
        printf("Linear equation\n");
        root1=-c/b;
        printf("Root = %.3f\n",root1);
    }
    else
    {
        disc=b*b-(4*a*c);
        if(disc==0)
        {
            printf("The roots are real and equal \n");
            root1=root2=-b/(2*a);
            printf("Root 1 = %.3f\n Root 2 = %.3f\n",root1,root2);
        }
        else if(disc>0)
        {
            printf("The roots are real and distinct \n");
            root1=(-b+sqrt(disc))/(2*a);
            root2=(-b-sqrt(disc))/(2*a);
            printf("Root 1 = %.3f\n Root 2 = %.3f\n ",root1,root2);
        }
        else
        { 
            printf("The roots are real and imaginary\n");
            real=-b/(2*a);
            imag=sqrt(fabs(disc))/(2*a);
            printf("Root 1 = %.3f + i %.3f\n",real,imag);
            printf("Root 2 = %.3f - i %.3f\n",real,imag);
        }
    }
}
