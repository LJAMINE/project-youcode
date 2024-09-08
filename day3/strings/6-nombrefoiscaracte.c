




#include <stdio.h>
#include <string.h>




int main(){

char stri[100],c;

int compteur;

printf("entree stri");
scanf("%[^\n]",&stri);
getchar();

printf("entree c");
scanf("%c",&c);

compteur=0;
for (int i=0;i<strlen(stri);i++){

    if (stri[i]==c){
        compteur++;
    }
}
    printf("%d",compteur);

return 0;
}


