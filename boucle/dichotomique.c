#include <stdio.h>
#include <stdlib.h>

int main()
{
 int tab[10]={1,2,3,4,5,6,7,8,9,10};

     int firstItem=0;
     int lastItem=9;
     int result ;
     int search=2;

 while(firstItem<=lastItem){
    result=(firstItem+lastItem)/2;

    if(tab[result]==search){
        printf(" search %d in index  %d",search,result);

    break;
 }else if(tab[result]>search){
     lastItem=result-1;
 }else{
 firstItem=result+1;
 }
}
 if (firstItem>lastItem){
    printf("search %d not found ",search );
 }





     return 0;
}
