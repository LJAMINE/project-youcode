




#include <stdio.h>
#include <string.h>



int main(){
  char S1[30],S2[30],s[100];

  printf("s1");
  scanf("%[^\n]",S1);
  getchar();

  printf("s2");
  scanf("%[^\n]",S2);
  getchar();


  strcat(s,S1);
    strcat(s,"");
  strcat(s,S2);

      printf("%s",s);





return 0;
}
