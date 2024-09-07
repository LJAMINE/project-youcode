


#include <stdio.h>
#include <stdlib.h>

 int main(){

int n ,i;

printf("entrer n");
scanf("%d",&n);

int tab1[10];

int tab2[10];
 for(i=0;i<n;i++){

    printf("donner tab ");
    scanf("%d",&tab1[i]);
 }
for(i=0;i<n;i++){

    printf("original %d ",tab1[i]);
}

for(int i=0;i<n;i++){
    tab2[i]=tab1[n-i-1];
}

for(i=0;i<n;i++){
    printf("%d",tab2[i]);
}














    return 0;



}
