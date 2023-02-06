/*
#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    char b[2]=" ",c[20];
    scanf("%s",&a);
    scanf("%s",&c);
    strcat(a,b);
    printf("Concatenated String: %s\n",  strcat(a,c));
    return 0;
}
*/
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char Str1[100], Str2[100];
  	int i, j;
 
  	printf("\n Please Enter the First String :  ");
  	scanf("%s",&Str1);
  	
  	printf("\n Please Enter the Second String :  ");
  	scanf("%s",&Str2);
 
  	for (i = 0; Str1[i]!='\0'; i++);
	
  	for (j = 0; Str2[j]!='\0'; j++, i++)
  	{
  		Str1[i] = Str2[j];
  	}
  	Str1[i] = '\0';

  	printf("\n String after the Concatenate = %s", Str1);
  	
  	return 0;
}