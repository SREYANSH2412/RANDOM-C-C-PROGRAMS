#include<stdio.h>
int largestNumber(int a,int b, int c)
{
	int largest=0;
	if(a>b && a>c)
		largest=a;
	else if(b>a && b>c)
		largest=b;
	else
		largest=c;
	return largest;
}

int main()
{
	int a,b,c,great;
	
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
    great=largestNumber(a,b,c);
	printf("Largest number is: %d\n",great);
	return 0;
}