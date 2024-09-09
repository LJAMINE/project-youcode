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

  printf("donner le nom du contact\n ");
  scanf("%[ ^\n]s", nomRecherche);

  for (int i=0;i<nombreContact;i++){

    if (strcmp(contacts[i].nom,nomRecherche)==0){
            printf("Livre trouvee \n ");

         printf("\t le nom est %s\n ",contacts[i].nom );

    printf("\t le nem Telephone est %s\n ",contacts[i].nemTelephone);

    printf("\t adresss email est %s\n ",contacts[i].adressMail);

    contactTrouve=1;
    }

  }
    //if (!contactTrouve){
      //  printf("not found");
    //}




}
