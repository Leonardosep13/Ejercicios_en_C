#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float lad1,lad2,ar;
	printf("Escriba el valor de su primer lado del cuadrado\n");
	scanf("%f",&lad1);
	printf("escriba el valor de su segundo lado del cuadrado\n");
	scanf("%f",&lad2);
	ar=lad1*lad2;
	printf("El area de su cuadrado %f*%f es: %f\n",lad1,lad2,ar);
}
