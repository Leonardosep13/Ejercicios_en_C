#include <stdio.h>
#include <stdlib.h>

void des(float a[]);

int main(int argc, char *argv[]) {
	
	int i=0;
	float prod[10];
	
	for(i=0;i<10;i++){
		prod[i]=rand () %101;
		printf("%.2f     ",prod[i]);
		printf("El precio original del producto %i es %.2f\n",i,prod[i]);
	}
	printf("\n\n");
	des( prod);
	return 0;
}

void des(float a[]){
	float descuento;
	int i;
	for(i=0;i<10;i++){
		descuento=a[i]*0.30;
		descuento=a[i]-descuento;
		printf("El precio final del producto %i es %.2f\n",i,descuento);
	}
}
