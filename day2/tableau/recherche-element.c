
#include <stdio.h>
#include <stdlib.h>

 int main(){

int n ,i,search;



printf("entrer search ");
scanf("%d",&search);

printf("entrer n");
scanf("%d",&n);

int tab1[n];
 for(i=0;i<n;i++){

    printf("donner tab ");
    scanf("%d",&tab1[i]);
 }
for(i=0;i<n;i++){

    printf("%d",tab1[i]);
}

for(i=0;i<n;i++){
    if(search==tab1[i]){
        printf ("le nombre %d =%d is found in the table ",search,tab1[i]);
        break;
    }else {
                printf ("le nombre %d is not found in the table ",search);

    }
}


    return 0;



}
