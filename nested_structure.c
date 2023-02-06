#include<stdio.h>  
struct address   
{  
    char city[20];  
    int pin;  
    char phone[14];  
};  
struct student  
{  
    char name[20];  
    struct address add;  
};  
void main ()  
{  
    struct student s;  
    printf("Enter student information?\n");  
    scanf("%s %s %d %s",s.name,s.add.city, &s.add.pin, s.add.phone);  
    printf("Printing the student information....\n");  
    printf("name: %s\nCity: %s\nPincode: %d\nPhone: %s",s.name,s.add.city,s.add.pin,s.add.phone);  
}