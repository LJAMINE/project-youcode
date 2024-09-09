#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structure.h"
#include "function.h"


//new commit
int main()
{
int choix;

  do{

     printf("\t 1 :ajoute contact. \n");
    printf("\t 2 : afficher contacts   . \n");
     printf("\t 3 :rechercher contacts . \n");
    printf("\t 4 : MODIFIE contacts \n");
        printf("\t 5 :  supprimer contact. \n");

      printf("\n");

        scanf("%d",&choix);
    switch(choix)
    {
    case 1 :
          ajouterContact();
        break;
    case 2 :
        afficherContact();
        break;
  case 3 :
        rechercherContaccs() ;
        break;

   /*  case 4 :
         modifierontacts ();

        break;

    case 5 :
        supprimerContact();
        break;

*/
        default:
                printf("error,  .\n");
                break;


    }

}while(choix > 0 && choix <= 5 );






    return 0;
}
