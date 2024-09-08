
#include<stdio.h>

int main()
{
int  tab[5]={33,2,3,4,5};
int  min=tab[0];
 for(int i=1;i<5;i++){

    if (tab[i]<min)
    min=tab[i];
 }
printf("%d",min);



/*for(i=0;i<n;i++){

    printf("%d",t[i]);
}
*/


      return 0;
}
