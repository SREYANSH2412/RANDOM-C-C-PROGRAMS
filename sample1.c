#include<stdio.h>
#include<stdlib.h>
int a[10],p[10];
int n=5;
int f=0;int r=0;int r1=0; int ele;int h;
int insert()
{
    int i;
    if(r == n-1 && r1== n-1)
    {
        printf("Overflow\n");
    }
    else
    for(i=0;i<5;i++)
    {
     printf("Enter the element and the priority:");
     scanf("%d%d",&ele,&h);
     a[r]= ele;
     r++;
     p[r1]= h;
     r1++;
    }
    printf("\n");
}
int delete()
{ int i,j;
    int t,t1;
  for (i=0; i<n-1; i++){
      for (j=i+1; j<n; j++){
         if (p[i] > p[j]){
            t = p[i];
            p[i] = p[j];
            p[j] = t;
              t1 = a[i];
            a[i] = a[j];
            a[j] = t1;
         }
      }
   }
   printf("%d is the deleted element\n",a[f]);
   f++;
}
int display()
{
    int i,j;
    int t,t1;
  for (i=0; i<n-1; i++){
      for (j=i+1; j<n; j++){
         if (p[i] > p[j]){
            t = p[i];
            p[i] = p[j];
            p[j] = t;
              t1 = a[i];
            a[i] = a[j];
            a[j] = t1;
         }
      }
   }
    for(i=f;i<r;i++)
    {
        printf("%d  ",a[i]);
    }
}
int main()
{
    int a;
    while(1)
    {
        printf("1.Insert element in queue\n2.Delete element from queue\n3.display\nEnter choice");
        scanf("%d",&a);
        switch(a)
        {
            case 1: insert();
            break;
            case 2: delete();
            break;
            case 3: display();
            break;
            default:
            exit(0);
        }
    }
}
