



#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;

printf("n");
scanf("%d",&n);
int somme=0;
    for(int i=1;i<=10;i++){
             somme+=n*i;

 printf("%d * %d = %d\n",n,i,n*i);



    }
printf("%d\n",somme);





     return 0;
}
