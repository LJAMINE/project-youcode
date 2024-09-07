





#include <stdio.h>

int main(){
 int day,mois,annee;

    char *moisnomm[]={ "","Janvier", "Février", "Mars", "Avril", "Mai", "Juin",
                        "Juillet", "Août", "Septembre", "Octobre", "Novembre", "Décembre"};

 printf("entrer Day and mois et annee \n");
  scanf("%d %d %d",&day,&mois,&annee);


printf("%d/%s/%d",day,moisnomm[mois],annee);




return 0;
}
