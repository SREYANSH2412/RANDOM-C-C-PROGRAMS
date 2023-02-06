#include<stdio.h>
struct student{
 int rollno;
 char name[10];
 float marks;
};
int main(){
 int i;
 struct student s[10];
 printf("Enter Records of 10 students");
 for(i=0;i<10;i++){
  printf("\nEnter Rollno:");   
  scanf("%d",&s[i].rollno);   
  printf("\nEnter Name:");   
  scanf("%s",&s[i].name);
  printf("\nEnter marks:");   
  scanf("%f",&s[i].marks);
 }
 printf("\nStudent Information List:");
 for(i=0;i<3;i++){   
     printf("\nRollno:%d\n, Name:%s\n, Marks:%f\n",s[i].rollno,s[i].name,s[i].marks);
 }
return 0;
}