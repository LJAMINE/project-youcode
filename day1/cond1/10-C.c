





#include <stdio.h>

int main(){
 int day,mois,annee;

    char *moisnomm[]={ "","Janvier", "F�vrier", "Mars", "Avril", "Mai", "Juin",
                        "Juillet", "Ao�t", "Septembre", "Octobre", "Novembre", "D�cembre"};

 printf("entrer Day and mois et annee \n");
  scanf("%d %d %d",&day,&mois,&annee);


printf("%d/%s/%d",day,moisnomm[mois],annee);




return 0;
}
