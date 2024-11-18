 
#include <stdio.h>

int main() {
 int vector[15];
 int i,mayor,pos;
   
   for(i=0;i<=15;i++){
       vector[i]=rand () % 101;
       printf("El valor de la posicion %i es %i\n\n\n",i,vector[i]);
	}
	mayor=vector[0];
   for (i=0;i<15 ;i++){

if(vector[i] > mayor){
    mayor = vector[i];
    pos = i;
}
}
printf("El numero mayor fue: %d en la posicion %d\n", mayor, pos);
   return 0;
}
