#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float vector[15],vector2[15],vector3[15];
	int i=0;
	for(i=0;i<=15;i++){
       vector[i]=rand () % 101;
       vector2[i]=rand () % 101;
       printf("El valor de la posicion %i del vector 1 es %2.f\n",i,vector[i]);
       printf("El valor de la posicion %i del vector 2 es %2.f\n\n",i,vector2[i]);
}
 for (i=0;i<=15;i++){
 	       vector3[i]=vector[i] *vector2[i];
       printf("El producto de las posiciones %i de ambos numeros es %2.f\n\n\n",i,vector3[i]);
 }
	return 0;
}
