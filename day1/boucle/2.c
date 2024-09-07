

#include <stdio.h>

int main() {
   int n;
   float f;
printf("entrer n");
   scanf("%d",&n);
    f=1;

if (n>0){

    for(int i=1;i<=n;i++){
    f*=i;
 }

    printf("%f",f);

}

    return 0;
}

