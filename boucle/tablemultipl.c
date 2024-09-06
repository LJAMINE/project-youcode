#include <stdio.h>
#include <stdlib.h>

int main()
{
 int somme=0,i , nombre;

 printf("entrer nombre ");
 scanf("%d",&nombre);

 for (int i=0;i<10;i++){
        somme+=nombre*i;
    printf("%d * %d =%d \n",nombre,i,nombre*i);

 }
 printf("aauusi la somme est %d",somme
);
     return 0;
}
