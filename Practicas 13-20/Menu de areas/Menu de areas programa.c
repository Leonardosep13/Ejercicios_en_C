#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int men,lad,bas,ha,rad,radc,basma,baseme,ar;
 	printf("\n seleccione el area que desea sacar\n 1.cuadrado\n 2.rectangulo\n 3.Circulo\n 4.trapecio\n");
	scanf("%i",&men);
switch (men)
{
case 1:
		printf("escriba cuanto vale un lado de su cuadrado\n");
		scanf("%i",&lad);
	ar=lad*lad;
	    printf("el area de %i*%i es: %i\n",lad,ar);
	break;
case 2:
		printf("escriba la base de su rectangulo\n");
		scanf("%i",&bas);
		printf("escriba la altura de su rectangulo\n",&ha);
		scanf("%i",&ha);
	ar=bas*ha;
	    printf("el area de %.i*%.i es: %i\n",bas,ha,ar);
	break;
case 3:
		printf("escriba el radio de su circulo\n");
		scanf("%i",&rad);
	radc=rad*rad;
	ar=radc*3.1416;
	    printf("el area de %i*3.1416 es: %i",radc,ar);
	break;
case 4:
	printf("Escriba la base mayor de su trapecio\n");
	scanf("%i",&basma);
	printf("Escriba la base menor de su trapecio\n");
	scanf("%i",&baseme);
	printf("Ahora escriba la altura de su trapecio\n");
	scanf("%i",&ha);
	ar=basma+baseme*ha/2;
	printf("El area de su trapecio %i+%i*%i/2 es: %i\n",basma,baseme,ha,ar);
	break;
}
	return 0;
}
