#include<stdio.h>

void main(){
	int count=0,n,i,flag=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(i*i<=n){
			count++;
		}
		else{
			flag++;
		}
	}
	printf("%d",count);
}