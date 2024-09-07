




#include <stdio.h>
#include <math.h>

int main(){
  char a;

  printf("a");
  scanf("%c",&a);

  if ((a>='a') && (a<='z') || (a>='A') && (a<='Z')){
    printf("%c est alphabet ",a);
     if ((a>='A') && (a<='Z')){
            printf("%c est majus ",a);

     }else{
         printf("%c est minus ",a);

     }

  }


return 0;
}
