#include <stdio.h>
#include <stdlib.h>

int main()
{

     int firstItem=0;
     int result ;
     int nb;
     int n;

     printf("entrer n");
     scanf("%d",&n);
          int lastItem=n-1;

     int tab[n];
     for(int i=0;i<n;i++){
        printf("entre tab");
        scanf("%d",&tab[i]);
     }
  printf("Entrer la valeur   rechercher: ");
    scanf("%d", &nb);
 while(firstItem<=lastItem){
    result=(firstItem+lastItem)/2;

    if(tab[result]==nb){
        printf(" search %d in index  %d",nb,result);

    break;
 }else if(tab[result]>nb){
     lastItem=result-1;
 }else{
 firstItem=result+1;
 }
}
 if (firstItem>lastItem){
    printf("search %d not found ",nb );
 }





     return 0;
}
