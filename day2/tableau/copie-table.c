

#include <stdio.h>
#include <stdlib.h>

 int main(){

int   n ,i;

printf("entrer n");
scanf("%d",&n);

int tab[n];
int tabCopie[n];
 for(i=0;i<n;i++){

    printf("donner tab ");
    scanf("%d",&tab[i]);
 }


 for(i=0;i<n;i++){

    tabCopie[i]=tab[i];
 }


 for(int j=0;j<n;j++){

    printf("%d",tab[j]);

    }


     for(int j=0;j<n;j++){

    printf("%d",tabCopie[j]);


    }







    return 0;



}
