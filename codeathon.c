#include<stdio.h>
void main()
{
    int n, arr[500], i,j, a[500],x;
    printf("Enter the number of employees: \n");
    scanf("%d", &n);
    printf("Enter the points of employees: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", arr[i]);
    }
    printf('Points of employees are as follows: \n');
    for(i=0;i<n;i++)
    {
        printf("%d", arr[i]);
    }
    a[0]=10000;
    for(i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            a[i+1]=a[i]+10000;
        }
        else if(arr[i]>arr[i+1]){
            if(arr[n-1]){
                x = 0;
                for (i = 0; i < n; i++) {
                    if (arr[i] == arr[n-1])
                        ++x;
                }
                a[i+1]=a[0]*x;
            }
            else
                arr[i+1]=a[i]-10000;
        }
        else{

        }
    }
}