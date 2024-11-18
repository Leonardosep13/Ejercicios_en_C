#include <stdio.h>
#include <stdlib.h>

int pro(int n1, int n2, int n3, int n4,int n5 );

int main(int argc, char *argv[]) {
	int prom,num1,num2,num3,num4,num5;
	printf("Ingrese los 5 numeros para sacar su promedio\n");
	scanf("%i%i%i%i%i",&num1,&num2,&num3,&num4,&num5);
	prom=pro(num1,num2,num3,num4,num5);
	printf("Su promedio es de %i",prom);
	return 0;
}

int pro(int n1, int n2, int n3, int n4,int n5 ){
	int res;
	res=(n1+n2+n3+n4+n5)/5;
	return res;
}
