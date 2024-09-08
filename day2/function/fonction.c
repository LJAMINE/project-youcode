#include <stdio.h>

int function (int a,int b){

int somme;
somme=a+b;
return somme;

}
int functionmult (int c,int f){

int multi;
multi=c*f;
return multi;

}
int main(){

    int a,b,somme;


printf("%d",function(1,3));
printf("%d",functionmult(2,3));

return 0;
}
