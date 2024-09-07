






#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
      int  x1,x2,y2,y1,z1,z2;
float distance;
      printf("x1 y1 ,z1,");
    scanf("%d %d %d", &x1, &y1, &z1);


      printf("z2,y2,z2");
    scanf("%d %d %d", &x2, &y2, &z2);

distance=sqrt((x2-x1)^2  + (y2-y1)^2 + (z2-z1)^2 );
      printf("%.2f",distance);




      return 0;
}
