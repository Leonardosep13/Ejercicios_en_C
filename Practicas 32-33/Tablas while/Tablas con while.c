#include <stdio.h>
#include <stdlib.h>

int main() {
    int i=0, j=1;
   while (i<10){
       i++;
       printf("\ntabla del %i\n",i);
       j=1;
       
       while (j<=10){
       printf("\n%d x %d = %d\n",i,j,i*j);
       j++;}
   }
    return 0;
}
