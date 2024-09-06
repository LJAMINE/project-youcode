

#include <stdio.h>
#include <stdlib.h>

 int main(){

int n ,i;
int min,max ;

printf("entrer n");
scanf("%d",&n);
int tab[n];

 for(i=0;i<n;i++){
    printf("entrer tab");
scanf("%d",&tab[i]);
 }
min=tab[0];
max=tab[0];
  for(i=1;i<n;i++){

        if (min>tab[i]){
                        min=tab[i];

        }else if (min<tab[i]){
                     max=tab[i];
        }

   }
           printf("%d",min);
           printf("%d",max);





    return 0;



}
