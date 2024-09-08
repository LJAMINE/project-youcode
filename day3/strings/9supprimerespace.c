
#include <stdio.h>
#include <string.h>

int main(){

char st[100];

printf("st");
scanf("%[^\n]",&st);
getchar();

for(int i=0;i<strlen(st);i++){

    if (st[i]==' '){
        continue;
    }else{
    printf("%c",st[i]);
    }

}


return 0;
}
