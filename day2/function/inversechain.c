
#include <stdio.h>
#include <string.h>
void inverSe( char c[]){
int i=0 , fin=strlen(c)-1 ;
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
char c[100];
printf("c");
scanf("%[^\n]",c);

inverSe(c);

printf("%s", c);



return 0;
}
