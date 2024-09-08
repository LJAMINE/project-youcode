


#include <stdio.h>
#include <string.h>

    struct Livre {

    char titre[100];
        char auteur[100];
        int anee;
  };
struct Livre   function( char *titre,char *auteur,int anee ){

 struct Livre livre;

 strcpy(livre.titre,titre);
 strcpy(livre.auteur,auteur);
 livre.anee=anee;

 return livre;
}



  int main (){

  struct Livre myLivre=function("langage c","amine",2000);

  printf("%s\n",myLivre.titre);
    printf("%s\n",myLivre.auteur);
    printf("%d\n",myLivre.anee);


  return 0;
  }
