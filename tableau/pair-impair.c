#include <stdio.h>
void functionPair(){

int i;
int tab[5]={1,2,3,4,5};
 for(i=0;i<5;i++){
    if (tab[i]%2==0){
                         printf("les elements pair est %d\n",tab[i]);

    }else{
                              printf("les elements impair est %d\n",tab[i]);

    }

 }


}
int main(){

functionPair();


return 0;
}
