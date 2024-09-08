

#include <stdio.h>

 int factorielle(int n){

 float f=1;
 for(int i=1;i<=n;i++){
     f*=i;

 }
 return f;

 }


int main(){

 printf("%d",factorielle(4));



 return 0;
}
