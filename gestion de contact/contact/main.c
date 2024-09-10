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
                printf("\t 6 : quitter. \n");


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

       case 4 :
             modifierContact();
      break;

     case 5 :
             supprimerContact();
      break;



    }

}while(choix!=6 );






    return 0;
}
