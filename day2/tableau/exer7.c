
#include <stdio.h>
#include <stdlib.h>

/*int  function(){
 int tab[5]={8,2,1,4,5};
int min ;
min=tab[0];
for (int i=1;i<5;i++){

    if (tab[i]<min){
        min=tab[i];
    }

}
   return  printf("le min est %d",min );
 }

 */
int main()
{

//function();
int n ;
printf("donner n");
scanf("%d",&n);
int tab[n];
int valeur ;


for(int i=0;i<n;i++){
    printf("donner tab");
scanf("%d",&tab[i]);


}

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
    if(tab[i]>tab[j]){
        valeur=tab[j];
        tab[j]=tab[i];
        tab[i]=valeur;

    }

}
}



for(int i=0;i<n;i++){
    printf("%d\n",tab[i]);

}





    return 0;
}
