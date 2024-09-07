
#include <stdio.h>
#include <time.h>


int main (){
 int h1,m1,s1;
 int  h2,m2,s2;


 printf("entrer 1 hh:mm:ss");
 scanf("%d%d%d",&h1,&m1,&s1);
  printf("entrer 2 hh:mm:ss");
 scanf("%d%d%d",&h2,&m2,&s2);

 if ( (h2>h1)||(h2==h1 && m1==m2 )|| (h2==h1 && m2==m1 && s1<s2)  ){
    printf( "Le premier instant vient avant le deuxième.");
 }else if (h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2)) {
        printf("Le deuxieme instant vient avant le premier.\n");
    } else {
        printf("Il  agit du même instant.\n");
    }

return 0;
}
