

#include <stdio.h>
#include <string.h>

int main(){

char phrase[100]  ;
char mot[100];

printf("phrase");
scanf("%[^\n]",&phrase);
getchar();

printf("mot");
scanf("%[^\n]",&mot);
getchar();

 if (strstr(phrase, mot) != NULL) {
        printf("  mot '%s' est trouvee dans phrase'%s'\n", mot, phrase);
    } else {
        printf("  mot '%s' n'est pas trouv dans phrase %s \n", mot);
    }


return 0;
}
