#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Calcular el area de un circulo
int main(int argc, char *argv[]) {
	float r,ar;
	printf("Introduzca el radio de su circulo\n");
	scanf("%f",&r);
	ar=r*r*3.1416;
	printf("El area de su circulo %f*%f es: %f\n",r,r,ar);
	return 0;
}
