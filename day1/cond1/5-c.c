


#include <stdio.h>
#include <math.h>

int main(){
    int annee,choix,result;



     printf("1,annees vers mois\n");
    printf("2,annees vers jours\n");
     printf("3,annees vers heurs\n");
     printf("4,annees vers min\n");
     printf("5,annees vers second\n");
     printf("entrer choix" );
     scanf("%d",&choix);
     printf("entre annee");
    scanf("%d",&annee);

        switch(choix){

    case 1:
    result=annee*12;
        printf("result in month =%d",result);
    break;
    case 2:
    result=annee*365;
        printf("result in jour=%d",result);
    break;
    case 3:
    result=annee*365*24;
        printf("result heurs=%d",result);
    break;
    case 4:
    result=annee*365*24*60;
        printf("result in minute =%d",result);
    break;
    case 5:
    result=annee*365*24*60*60;
        printf("result in secondes=%d",result);
    break;

    default:
        printf("error");

        }










return 0;
}
