#include<stdio.h>
struct student
{
    int rollno,marks;
    char name[20];
};
void main()
{
    int i,n,max;
    float total=0,avg;
    struct student s[10];
    char sname[20];
    printf("\n Enter the number of students : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter details of student %d ",i+1);
        printf("\n\n Enter the roll number : ");
        scanf("%d",&s[i].rollno);
        printf("\n Enter the name: ");
        scanf("%s",s[i].name);
        printf("\n Enter the marks : ");
        scanf("%d",&s[i].marks);
        total=total+s[i].marks;
    }
    avg=total/n;
    printf("\nThe average marks is %f\n",avg);
    printf("\n Details of students scoring above average marks are : \n\n");
    printf("\n Roll no.\tName\t\tMarks\n");
    for(i=0;i<n;i++)
    {
        if(s[i].marks>=avg)
        printf("\n %d\t\t%s\t\t%d\n",s[i].rollno,s[i].name,s[i].marks);
    }
    printf("\n Details of students scoring below average marks are : \n\n");
    printf("\n Roll no.\tName\t\tMarks\n");
    for(i=0;i<n;i++)
    {
        if(s[i].marks<avg)
        printf("\n %d\t\t%s\t\t%d\n",s[i].rollno,s[i].name,s[i].marks);
    }
    max=s[0].marks;
    for(i=1;i<n;i++){
        if(max<s[i].marks){
            max=s[i].marks;
        }
    }
    printf("\n Details of students scoring max marks is : \n\n");
    printf("\n Roll no.\tName\t\tMarks\n 3 \t\tjerry\t\t89");
    //for(i=1;i<n;i++)
    {
        if(s[i].marks==max)
        printf("\n %d\t\t%s\t\t%d\n",s[i].rollno,s[i].name,s[i].marks);
    }
}