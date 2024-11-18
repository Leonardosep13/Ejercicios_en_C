#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float ba,ha,ar;
	printf("Escriba el valor de la base de su rectangulo\n");
	scanf("%f",&ba);
	printf("escriba el valor de la altura de su rectangulo\n");
	scanf("%f",&ha);
	ar=ba*ha;
	printf("El area de su cuadrado %f*%f es: %f\n",ba,ha,ar);
}
