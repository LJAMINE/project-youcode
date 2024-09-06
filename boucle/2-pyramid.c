
#include <stdio.h>
#include <stdlib.h>

int main()
{

 int ligne;
 printf("enter ligne");
 scanf("%d",&ligne);

 for(int i=0;i<=ligne;i++) {
    for(int j=i;j<ligne;j++){
            printf("");
    }
for(int j=1;j<=(i*2-1);j++) {
    printf("*");
}
printf("\n");
 }
     return 0;
}
