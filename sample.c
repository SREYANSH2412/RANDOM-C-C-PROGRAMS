#include<stdio.h>
void main()
{
int i,j,k,m,c,flag=0;
char str[100],pat[100],ans[100],rep[100];
printf("Enter MAIN string:\n");
scanf("%s",str);
printf("Enter PATERN string:\n");
scanf("%s",pat);
printf("Enter the REPLACEMENT string:");
scanf("%s",rep);
i = m = j = c = 0;
while( str[c] != '\0')
{
if(str[m] == pat[i])
{
i++;
m++;
   flag=1;
if(pat[i]=='\0')
{
for(k=0 ; rep[k]!='\0' ; k++,j++)
ans[j]=rep[k];
i=0;                 //
c=m;
}
}
else
{
ans[j]=str[c];
j++;
c++;
m=c;
i=0;
}
}
if(flag==0)
{
printf("Pattern not found\n");
}
else
{
ans[j] = '\0';
printf("result = %s",ans);
}
}