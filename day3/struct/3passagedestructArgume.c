

#include <stdio.h>
#include <string.h>

    struct Rectangle {

    float longuer;
    float largeur;

  };
float function(  struct Rectangle rect){

return rect.longuer* rect.largeur;

}



  int main (){

      struct Rectangle r;

   float longuer,largeur;

printf( "languer");
scanf("%f",&r.longuer);

printf( "large");
scanf("%f",&r.largeur);

float result=function(r);

printf("%f",result);
  return 0;
  }
