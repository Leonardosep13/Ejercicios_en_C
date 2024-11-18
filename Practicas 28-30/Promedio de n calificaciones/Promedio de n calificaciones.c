#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	
	int cic, calif,suma,valores,prom;
	
	printf("Introduzca el numero de calificaciones que quiere promediar\n");
	scanf("%i",&calif);
	
	for (cic=1;cic<=calif;cic++){
		printf("Escriba el valor de la calificacion\n");
		scanf("%i",&valores);
		valores+=suma;
	}
	prom=suma/calif;
	printf("Su promedio es %i\n",prom);
	return 0;
}

