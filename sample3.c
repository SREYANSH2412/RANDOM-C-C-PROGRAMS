#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct emp{
  int eid;
  char ename[20],desig[20];
  float salary;
};

struct emp e[10];

void highest(){
  float temp;
  temp=e[0].salary;
  for(int i=1;i<10;i++){
    if(temp<e[i].salary){
      temp=e[i].salary;
    }
  }
  for(int i=0;i<10;i++){
    if(temp==e[i].salary)
      printf("Name: %s, desig: %s, salary: %f\n",e[i].ename,e[i].desig,e[i].salary);
  }
}

void higheste(char x[20]){
  int a[10];
  char b[10],c[10];
  float d[10];
  float temp;
  char temp1;
  char temp2;
  for(int i=0;i<10;i++){
    if(strcmp(e[i].desig,x)==0){
      a[i]=e[i].eid;
      strcpy(b[i],e[i].ename);
      strcpy(c[i],e[i].desig);
      d[i]=e[i].salary;
    }
  }
  temp=d[0];
  for(int i=1;i<10;i++){
    if(temp<d[i]){
      temp=d[i];
      temp1=b[i];
      temp2=c[i];
    }

  }
  printf("Name: %s, desig: %s, salary: %f\n",temp1,temp2,temp);
}

void main(){
  int id;
  char name[20],desi[20];
  float sal;
  int i,n,ch;
  char x[20];
  printf("No. of employees:");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("id:");
    scanf("%d",&id);
    e[i].eid=id;
    printf("name:");
    scanf("%s",name);
    strcpy(e[i].ename,name);
    printf("designation:");
    scanf("%s",desi);
    strcpy(e[i].desig,desi);
    printf("salary:");
    scanf("%f",sal);
    e[i].salary=sal;
  }
  printf("Enter 1 for any employee, 2 for particular employee:");
  scanf("%d",ch);
  switch(ch){
    case 1:highest();
      break;
    case 2:printf("Enter SE/JE/Manager:");
      scanf("%s",x);
      higheste(x);
      break;
  }
}