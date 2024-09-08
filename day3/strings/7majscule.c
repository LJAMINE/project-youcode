





#include <stdio.h>
#include <string.h>




int main(){

 char s[100];

 printf("s");
 scanf("%[^\n]",&s);
 getchar();

 for(int i=0;i<=strlen(s);i++){
    if (s[i]==' '){
        continue;
    }else{
printf("%c",s[i]);

    }
 }

return 0;
}


