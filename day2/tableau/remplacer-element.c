#include <stdio.h>

int main (){

 int n,i,reValeur , newVleur;

 printf("donner n");
 scanf("%d",&n);

  printf("donner reValeur");
 scanf("%d",&reValeur);

 int T[n];

 for(i=0;i<n;i++){
    printf("donner table");
 scanf("%d",&T[i]);
 }

 for(i=0;i<n;i++){
    printf("%d",T[i]);
 }

  printf("donner newVleur");
 scanf("%d",&newVleur);

 for(i=0;i<n;i++){
    if (reValeur==T[i]){
      T[i]=newVleur;
    }

 }
printf("remplacer est %d\n",reValeur);
printf("new  est %d\n",newVleur);

 for(i=0;i<n;i++){
    printf("%d",T[i]);
 }


return 0;
}
