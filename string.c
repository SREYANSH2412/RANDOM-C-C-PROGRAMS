#include <stdio.h>
void stringlen(char []);
void stringcat(char [], char []);
int stringcmp(char [], char []);
int main()
{
char s1[100], s2[100];
int choice;
printf("Enter Your Choice\n1-String Length\n2-String Concatenate\n3-String Comparision\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("Input a string to find its length:");
scanf("%s",s1);
stringlen(s1);
break;
case 2:printf("Input first string:");
scanf("%s",s1);
printf("Input second string:");
scanf("%s",s2);
stringcat(s1,s2);
printf("String obtained on concatenation: \"%s\"\n", s1);
break;
case 3:printf("Comparision of two strings\n");
printf("Input string1\n");
scanf("%s",s1);
printf("Input string2 \n");
scanf("%s",s2);
if (stringcmp(s1,s2) == 0)
printf("The strings are equal.\n");
else
printf("The strings are not equal.\n");
break;
default: printf("Invalid Choice");
}
}
void stringlen(char s[100])
{
int len=0;
while(s[len]!='\0')
    len++;
printf("The Length of the given String is %d\n",len);
}
void stringcat(char s1[100], char s2[100])
{
int len=0, i;
while(s1[len]!='\0')
{
    len++;
}
i=0;
s1[len]=' ';
len+=1;
while(s1[i]!='\0'){
    s1[len]=s2[i];
    i++;
    len++;
}
s1[len]='\0';
}
int stringcmp(char s1[100], char s2[100])
{
int i = 0;
for (i=0;s1[i]!='\0' && s2[i] !='\0';i++)
{
if(s1[i]!=s2[i])
return -1;
}
if (s1[i] == '\0' && s1[i] == '\0')
return 0;
else
return -1;

}