#include <stdio.h>
#include <stdlib.h>


int main() {
 int vector[10]={1,2,3,4,5,6,7,8,9,10};
 int i,suma=0,prom;
   
   for(i=0;i<10;i++){
       suma+=vector[i];
   }
   prom=suma/10;
   printf("El promedio es %i \n",prom);
   
   return 0;
}
