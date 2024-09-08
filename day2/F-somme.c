
 #include <stdio.h>

 int main(){

int min,tab[5]={1,2,3,4,5};

     for(int i=1;i<5;i++){
min=tab[0];
        if (tab[i]<min){
            min=tab[i];
        }
     }
        printf("%d",min);


 return 0;
 }
