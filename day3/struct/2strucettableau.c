
#include <stdio.h>
#include <string.h>

    struct Personne {
   char nom[100];
    char prenom[100];
    float note[4];
    int age;

  };


  int main (){

    struct Personne E1;

   /* strcpy(E1.nom,"lamga");
    strcpy(E1.prenom,"amine");
    E1.age=22;
*/

printf("enter nom\n");
scanf("%s",&E1.nom);

printf("enter prenom\n");
scanf("%s",&E1.prenom);

printf("enter age\n");
scanf("%d",&E1.age);

printf("enter note\n");

for (int i=0;i<4;i++){
printf("enter note %d",i+1);

    scanf("%f",&E1.note[i]);

}

printf("%s %s\n",&E1.nom,E1.prenom);

printf("%d\n",E1.age);

for(int i=0;i<4;i++){

    printf("%f\n",E1.note[i]);
}







  return 0;
  }
