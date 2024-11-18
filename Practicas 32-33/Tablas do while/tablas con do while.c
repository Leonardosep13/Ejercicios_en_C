#include <stdio.h>
#include <stdlib.h>

int main() {
    int i=0, j=1;
  do{
       i++;
       printf("\ntabla del %i\n",i);
       j=1;
       
     do{
       printf("\n%d x %d = %d\n",i,j,i*j);
       j++;}
       while (j<=10);
   }
   while (i<10);
    return 0;
}
