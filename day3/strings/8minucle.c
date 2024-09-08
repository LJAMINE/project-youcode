






#include <stdio.h>
#include <string.h>




int main(){

char stri[100];
int i;
printf("stri");
scanf("%[^\n]",&stri);
getchar();

 for (  i=0;stri[i]!= '\0';i++){

    if (stri[i]>='a' && stri[i]<='a'){
    stri[i]=stri[i]-32;
 }


 }
  printf("%s",stri);

return 0;
}


