#include <stdio.h>
int main() 
{
  int m,n,x,i, f = 0;
  printf("Enter two positive integer: ");
  scanf("%d %d",&m,&n);
  for(x=m;x<=n;++x)
  {
      for (i = 2; i <= x/2; ++i)
      {
          if (x % i == 0)
          {
              f = 1;
              break;
          }
      }
      if(f==0)
        printf("%d\n",x);
  }
}
