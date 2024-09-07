
#include<stdio.h>

int main()
{
      int i,a,s,r;
      scanf("%d",&a);
      s=0;
      r=a;
      while(r!=0)
      {
                 s=10*s+r%10;
                 r=r/10;
      }
      printf("%d",s);
      return 0;
}
