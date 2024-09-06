
#include <stdio.h>

int main(){

 int n,i,somme,moyenne;

 printf("entre n");
 scanf("%d",&n);

 int tab[n];
 for(i=0;i<n;i++){
    printf("entrer tab");
 scanf("%d",&tab[i]);

 somme+=tab[i];
 moyenne=somme/n;
 }
    printf(" somme %d et moyenne %d ",somme,moyenne);



return 0;
}
