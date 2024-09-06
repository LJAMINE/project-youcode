#include <stdio.h>


int main(){

int n3,n1,n2,i;

printf("n1\n");
scanf("%d",&n1);

int T1[n1];

for(i=0;i<n1;i++){
    printf("T1");
scanf("%d",&T1[i]);
}
for(i=0;i<n1;i++){
    printf("\t T1 =%d\n",T1[i]);
 }


printf("n2\n");
scanf("%d",&n2);


int T2[n2];

for(i=0;i<n2;i++){
    printf("T2");
scanf("%d",&T2[i]);
}


 for(i=0;i<n2;i++){
    printf("\t T2=%d\n",T2[i]);
 }
  n3=n1+n2;

 int tab3[n3];


 for(i=0;i<n1;i++){
    tab3[i]=T1[i];

 }
  for(i=0;i<n2;i++){
    tab3[n1+i]=T2[i];

 }


for(i=0;i<n3;i++){
    printf("%d\n",tab3[i]);
 }
return 0;
}

