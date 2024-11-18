#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int men;
float camb,dol,eur,pes;
printf("\nSeleccione de acuerdo al numero del menú que divisa desea cambiar\n 1.peso a dolar\n 2.dolar a peso\n 3.peso a euro\n 4.euro a peso\n 5.dolar a euro\n.6.euro a dolar\n");
scanf("%i",&men);
switch (men){
	case 1:
		printf("cuantos pesos desea convertir a dolar?\n");
		scanf("%f",&pes);
		camb=20.04*pes;
		printf("%.2f pesos equivale a %.2f dolares\n",pes,camb);
	break;
	
	case 2:
		printf("cuantos dolares desea convertir a pesos\n");
		scanf("%f",&dol);
		camb=dol/0.0050;
		printf("%.2f dolares equivale a %.2f pesos\n",dol,camb);
	break;
	
	case 3:
		printf("cuantos pesos desea convertir a euros?\n");
		scanf("%f",&pes);
		camb=20.80*pes;
		printf("%.2f pesos equivalen a %.2f euros\n",pes,camb);
	break;
	
	case 4:
		printf("cuantos euros desea convertir a pesos?\n");
		scanf("%f",&eur);
		camb=20.80*eur;
		printf("%.2f euros equivalen a %.2f pesos",eur,pes);
	break;
	
	case 5:
		printf("cuantos dolares desea convertir a euros?\n");
		scanf("%f",&dol);
		camb=1.20*dol;
		printf("%.2f dolares equivale a %.2f euros",dol,camb);
	break;
	
	case 6:
		printf("cuantos euros desea convertir a dolar?\n");
		scanf("%f",&eur);
		camb=eur/0.80;
		printf("%.2f euros quivalen a %.2f dolares\n",eur,camb);
	break;
	
	default:
		printf("no existe esa opcion\n");
 }
return 0;
}
