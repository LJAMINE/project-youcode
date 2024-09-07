
#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n  ;
 float f=1;

 printf("n");
 scanf("%d",&n);

 if (n>0){

    for( int i=1;i<=n;i++){
        f*=i;

    }
      printf("%f",f);


 }else{

    printf("error");
    }




     return 0;
}
