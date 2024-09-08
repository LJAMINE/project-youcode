



#include <stdio.h>
#include <string.h>



int main(){
  char tablea[100] ;

  printf("n");
  scanf("%[^\n]",&tablea);

  int longeur=0;

  for(int i=0;i<100;i++){

    if (tablea[i]==0){
        break;
    }else{

    longeur=longeur+1;
    }
  }
      printf("%d",longeur);

return 0;
}
