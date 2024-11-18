#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1416
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int men;
float num,pot,res,cuad,sen,rad,cose,loga;
	printf("\nSeleccione que operacion quiere hacer\n 1.potencia\n 2.raiz\n 3.seno\n 4.coseno\n 5.logaritmo\n");
	scanf("%i",&men);
switch (men){
	
	case 1:
		printf("escriba el numero que quiere elevar\n");
		scanf("%f",&num);
		printf("escriba la potencia a la que lo quiere elevar\n");
		scanf("%f",&pot);
		res=pow(num,pot);
		printf("El resultado es: %.2f\n",res);
	break;
	
	case 2:
		printf("escriba un numero para sacar su raiz cuadrada\n");
		scanf("%f",&cuad);
		res= sqrt(cuad);
		printf("su raiz cuadrada es: %.2f\n",res);
	break;
	
	case 3:
		printf("Escriba un valor para sacar su seno\n");
		scanf("%f",&sen);
		rad=sen*pi/180;
		res=sin(rad);
		printf("el resultado es: %f\n",res);
	break;
	
	case 4:
		printf("Escriba un valor para sacar su coseno\n");
		scanf("%f",&cose);
		rad=cose*pi/180;
		res=cos(rad);
		printf("el resultado es: %f\n",res);
	break;
	
	case 5:
		printf("Escriba un valor para sacar su logaritmo\n");
		scanf("%f",&loga);
		res=log(loga);
		printf("El resultado es: %f\n",res);
	break;
	
	default:
		printf("Esa opcion no existe\n");
}
	return 0;
}
