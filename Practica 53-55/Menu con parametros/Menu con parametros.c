#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1416

float pot (float n);

float raiz(float n);

float coseno(float n);

float loga(float n);

int main(int argc, char *argv[]) {
	float num;
	int men;
	
	printf("Ingrese un valor\n");
	scanf("%f",&num);
	printf("Seleccione que operacion quiere hacer\n 1.potencia\n 2.raiz\n 3.coseno\n 4.logaritmo\n");
	scanf("%i",&men);
	
	switch(men){
		
		case 1:
			pot(num);
		break;
		
		case 2:
			raiz(num);
		break;
		
		case 3:
			coseno(num);
		break;
		
		case 4:
			loga(num);
		break;
		
		default:
			printf("Esa opcion no existe\n");
		break;
			
	}
	
	return 0;
}
float pot (float n){
	float pot,res;
	printf("escriba la potencia a la que lo quiere elevar\n");
		scanf("%f",&pot);
		res=pow(n,pot);
		printf("El resultado es: %.2f\n",res);
}

float raiz(float n){
	float res;
	res= sqrt(n);
		printf("su raiz cuadrada es: %.2f\n",res);
}

float coseno(float n){
	float res,rad;
	rad=n*pi/180;
		res=cos(rad);
		printf("el resultado es: %.2f\n",res);
}
float loga(float n){
	float res;
	res=log(n);
		printf("El resultado es: %.2f\n",res);
}
