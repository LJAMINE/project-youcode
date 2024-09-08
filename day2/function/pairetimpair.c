

#include <stdio.h>
#include <string.h>

int pairImpair(int a){

    if (a%2==0){
        return 1;
    }else{
    return 0;
    }
}


int main(){
int n;
printf("n");
scanf("%d",&n);

printf("%d",pairImpair(n));

return 0;
}
