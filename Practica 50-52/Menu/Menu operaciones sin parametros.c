#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1416
void def(){
	printf("esa opcion no existe\n");
}
void selec(){
	printf("Seleccione que operacion quiere hacer\n 1.potencia\n 2.raiz\n 3.coseno\n 4.logaritmo\n");
}

void val(){
	printf("Ingrese su valor\n");
}

//Main

int main(int argc, char *argv[]) {
	float num,pot,res,rad;
	int men;
	val();
	scanf("%f",&num);
	selec();
	scanf("%i",&men);
	 
	 switch(men){
	 	
	case 1:
	    printf("escriba la potencia a la que lo quiere elevar\n");
		scanf("%f",&pot);
		res=pow(num,pot);
		printf("El resultado es: %.2f\n",res);
	break;
		
	case 2:
		res= sqrt(num);
		printf("su raiz cuadrada es: %.2f\n",res);
	break;
		
	case 3:
		rad=num*pi/180;
		res=cos(rad);
		printf("el resultado es: %.2f\n",res);
	break;
		
	case 4:
		res=log(num);
		printf("El resultado es: %.2f\n",res);
	break;
	
	default:
		 def();
	break;
	}	
	
	return 0;
}
