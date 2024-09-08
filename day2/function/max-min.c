
#include <stdio.h>

/*void maxMin (int a,int b){
if (a>b){
    printf("%d is greater ",a);
}else{
    printf("%d is greater ",b);

}


}
*/
int maxMin (int a,int b){
if (a>b) {
    return a;
}else {
return b ;
}
}

int main(){

    int a,b;


// maxMin(1,3) ;

printf("%d",maxMin(2,6));
return 0;
}
