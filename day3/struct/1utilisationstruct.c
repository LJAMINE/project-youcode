
#include <stdio.h>

  struct Personne {
  int age ;
  char nom[100];
    char prenom[100];

  };


  int main (){

  struct Personne p1={12,"lamgar","amine"};

  printf("%d\n",p1.age);
    printf("%s\n",p1.nom);
  printf("%s\n",p1.prenom);





  return 0;
  }
