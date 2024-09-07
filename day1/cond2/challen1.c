

#include <stdio.h>
#include <time.h>


int main (){
  float revenu,score,duree;

  printf("revenu et score et duree");
  scanf("%f%f%f",&revenu,&score,&duree);

  if (revenu>= 30000 && score>=700 && duree<=10 ){
    printf("elligible");
  }else if (revenu>= 30000 && score>=650 && duree<=15){
      printf("Éligible avec conditions");
  }else{
            printf("Non Eligible");

  }

return 0;
}
