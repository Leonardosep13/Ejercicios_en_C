#include <stdio.h>
#include <stdlib.h>

void imp(){
	printf("Ingrese 5 numeros para promediarlos\n");
}

void imp2(){
	printf("Su promedio es :  ");
}



int main(int argc, char *argv[]) {
	int num,num2,num3,num4,num5,prom;
	
	 imp();
	scanf("%i",&num);
	scanf("%i",&num2);
	scanf("%i",&num3);
	scanf("%i",&num4);
	scanf("%i",&num5);
	
	prom=(num+num2+num3+num4+num5)/5;
	
	imp2();
	
	printf("%i\n",prom);
	
	return 0;
}
