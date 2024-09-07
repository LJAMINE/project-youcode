#include <stdio.h>
#include <time.h>


int main (){
srand(time(NULL));
char *jours[7]={"lundi","mardi","mercredi","jeudi","vendredi","samedi","dianche"};

int random_valeur=sizeof(jours)/sizeof(jours[0]);

int chouse_valeur= rand()%random_valeur;

printf("la valeur est %s",jours[chouse_valeur]);

return 0;
}
