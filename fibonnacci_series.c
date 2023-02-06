#include <stdio.h>
int main()
{
    int i,n,t=0,u=1,next_term=t+u;
    printf("enter no.:");
    scanf("%d",&n);
    printf("fibonnacci series: %d %d ",t,u);
    for(i=3;i<=n;i++)
    {
        printf("%d ",next_term);
        t=u;
        u=next_term;
        next_term=t+u;
    }
}
