




#include <stdio.h>
#include <string.h>

void inversee(char c[]){

int i=0,fin=strlen(c)-1;
char variable;

while(fin>i){

    variable=c[fin];
    c[fin]=c[i];
    c[i]=variable;
    i++;
    fin--;
}

}

int main(){
char a[100];
printf("a");
scanf("%[^\n]",a),

inversee(a);

printf("%s",a);



return 0;
}


