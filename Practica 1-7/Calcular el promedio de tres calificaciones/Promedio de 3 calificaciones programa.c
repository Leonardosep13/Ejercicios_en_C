#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float cal1,cal2,cal3,suma,prom;
	printf("escriba su primera calificacion\n");
	scanf("%f",&cal1);
	printf("escriba su segunda calificacion\n");
	scanf("%f",&cal2);
	printf("escriba su tercera calificacion\n");
	scanf("%f",&cal3);
	suma=cal1+cal2+cal3;
	prom=suma/3;
	printf("El promedio de su calificacion %f/3 es:%f",suma,prom);
	return 0;
}
