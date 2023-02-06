#include<stdio.h>
#include<math.h>
void main()
{
    int s;
    float d,n;
    printf("\nEnter the number : ");
    scanf("%f",&n);
    if (n>=0)
    {
        for(s=1;s*s<=n;s++);
        s--;
        for(d=s+0.001;d*d<=n;d+=0.001);
        d=d-0.001;
        printf("The square root of %f = %.3f\n",n,d);
        printf("Using built in function sqrt(%f) = %.3f\n",n,sqrt(n));
    }
    else
        printf("No square root of negative number");
}