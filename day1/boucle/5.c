



#include <stdio.h>

int main() {
   int exposant,base;


   printf("base");
   scanf("%d",&base);

    printf("expo");
   scanf("%d",&exposant);
   int puiss=1;

   for(int i=0;i<exposant;i++){
        puiss*=base;

   }
       printf("%d",puiss);

    return 0;
}

