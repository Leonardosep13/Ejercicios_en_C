#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//Variables
int men;
float cm,m,km,conv;
    printf("\n Seleccione de acuerdo a los numeros del menu cual unidad dese convertir\n 1.cm a metro\n 2.metros a cm\n 3.cm a km\n 4.km a cm\n 5.metros a km\n 6.km a m\n");
	scanf("%i",&men);
switch (men){
	case 1:
		printf("cuantos cm desea convertir a metros?\n");
		scanf("%f",&cm);
		conv=100*cm;
		printf("%.2f cm equivale a %.2f metros\n",cm,conv);
	break;
	
	case 2:
		printf("cuantos metros a cm desea convertir?\n");
		scanf("%f",&m);
		conv=100/m;
		printf("%.1f metros equivale a %.2f cm\n",m,conv);
	break;
	
	case 3:
		printf("cuantos cm a km desea convertir?\n");
		scanf("%f",&cm);
		conv=100000/cm;
		printf("%f cm equivalen a %.2f km",cm,conv);
	break;
	
	case 4:
		printf("cuantos km quiere convertir a cm?\n");
		scanf("%f",&km);
		conv=km*100000;
		printf("%.3f km son equivalentes a %.4cm\n",cm,conv);
	break;
	
	case 5:
		printf("escriba cuantos metros quiere convertir a km");
		scanf("%f",&m);
		conv=1000/m;
		printf("%.2f metros equivalen a %.2f km\n",m,conv);
	break;
	
	case 6:
		printf("escriba cuantos km quiere convertir a metros\n");
		scanf("%f",&km);
		conv=km*1000;
		printf("%.2f km equivale a %.3f\n",km,conv);
	break;
	
	default: 
	    printf("esa opcion no existe\n");
	
	break;
}	
	return 0;
}
