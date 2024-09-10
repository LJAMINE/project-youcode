#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

#include "structure.h"


struct Contact contacts[100];
int nombreContact=0;

void ajouterContact(){

struct Contact newContact;

    printf("donner NOM");
    scanf("%s[^\n]",newContact.nom);

    printf("donner nemTelephone");
    scanf("%s[^\n]",newContact.nemTelephone);

    printf("donner adressMail");
    scanf("%s[^\n]",newContact.adressMail);

    contacts[nombreContact]=newContact;
    nombreContact++;

}

void afficherContact(){



   for(int i=0;i<nombreContact;i++){

     printf("\tle nom est %s\n",contacts[i].nom );

    printf(" \tle nemTelephone est %s\n",contacts[i].nemTelephone);

    printf("\tadresss email est %s\n",contacts[i].adressMail);

   }
  printf("\n");

}


void rechercherContaccs (){
  char nomRecherche[100];
  int contactTrouve=0;

     printf("entree le nom de contact : \n");
    scanf(" %[^\n]", nomRecherche);

    for (int i = 0; i < nombreContact; i++) {
        if (strcmp(contacts[i].nom, nomRecherche) == 0) {
               printf("contact trouvee :\n");
            printf("\t nom : %s\n", contacts[i].nom);
            printf("\t  tele : %s\n", contacts[i].nemTelephone);
                        printf("\t mail : %s\n", contacts[i].adressMail);



 contactTrouve = 1;
            break;

        }

    }


    if (!contactTrouve) {
        printf("contact non trouv.\n");
    }

}

// modifyy
 void modifierContact(){

char nomRechercher[100];
  int contactTrouve=0;

  printf("enter nom de contact");
  scanf("%[^\n]",nomRechercher);

  for(int i=0;i<nombreContact;i++){


    if (strcmp(contacts[i].nom,nomRechercher)==0){

       printf("\t nom : %s\n", contacts[i].nom);
            printf("\t  tele : %s\n", contacts[i].nemTelephone);
                        printf("\t mail : %s\n", contacts[i].adressMail);
                         printf("enter nouveau tele");
                         scanf("%s[^\n]", contacts[i].nemTelephone);

                         printf("enter nouveau email");
                         scanf("%s[^\n]" ,contacts[i].adressMail);





                        contactTrouve=1;
                        break;

    }



  }
if(!contactTrouve){
    printf("no trouvee");
}

 }
void supprimerContact(){
   char nomRechercher[100];
  int contactTrouve=0;

    printf("Entrez  nom rechercher :\n");
    scanf(" %[^\n]", nomRechercher);
    for (int i=0;i<nombreContact;i++){

        if (strcmp(contacts[i].nom,nomRechercher)==0){

         contactTrouve=1;
         for(int j=i;j<nombreContact-1;j++){
            contacts[j]=contacts[j+1];
        }
           nombreContact--;
 printf("contact  est supprime !\n");
            break;

        }


    }

  if (!contactTrouve){
        printf("not found");
    }

}


#endif // FUNCTION_H_INCLUDED
