#include <stdio.h>
#include <conio.h>
// prototype of function
void del_str(char [],int, int);
void main(){
   int n,p;
   char str[30];
   printf("\n Enter the String:");
   gets(str);
   fflush(stdin);
   printf("\n Enter the position from where the characters are to be deleted:");
   scanf("%d",&p);
   printf("\n Enter Number of characters to be deleted:");
   scanf("%d",&n);
   del_str(str,p,n);
}
//function call
void del_str(char str[],int p, int n){
   int i,j;
   for(i=0,j=0;str[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      str[j]=str[i];
   }
   str[j]='\0';
   puts(" The string after deletion of characters:");
   puts(str);
}