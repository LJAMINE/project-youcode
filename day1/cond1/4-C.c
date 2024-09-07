

#include <stdio.h>
#include <math.h>

int main(){
int a,b,c;
float delta,s1,s2,s3;

printf("entre a");
scanf("%d",&a);
printf("entre b");
scanf("%d",&b);
printf("entre c");
scanf("%d",&c);

 delta=(b*b)-(4*a*c);


if (delta<0){

    printf("pas solutionn" );
}else if (delta=0){
   s3=(-b)/(2*a);
 printf(" s3= %f\n",s3);

}else{
  s1 = ((-b) - (sqrt( delta ))) / (2 * a );
    s2 = ((-b) + (sqrt( delta ))) / ( 2 * a );
   printf("la solution de cette equation est %.2f et %.2f :",s1,s2);

}






return 0;
}
