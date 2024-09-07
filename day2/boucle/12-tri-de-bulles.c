


#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;

printf("n");
scanf("%d",&n);
int tab[n];

for(int i=0;i< n;i++){

   printf("tab");
    scanf("%d",&tab[i]);


    }

    for (int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (tab[j]>tab[j+1]){
                int valeur=tab[j+1];
                tab[j+1]=tab[j];
                tab[j]=valeur;
            }
        }
    }


    for(int i=0;i< n;i++){

   printf("%d\n",tab[i]);


    }





     return 0;
}
