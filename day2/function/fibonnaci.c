#include <stdio.h>


int FibonAcci(int a){

if (a==0||a==1){
    return a;

}else{
return (FibonAcci(a-1)+FibonAcci(a-2));

}


}
int main(){

int n ,cmpter=0;
printf("n");
scanf("%d",&n);

printf(" fibonaci est",n);

for(int i=0;i<n;i++){

  printf("%d",  FibonAcci(cmpter));
  cmpter++;
}


}
