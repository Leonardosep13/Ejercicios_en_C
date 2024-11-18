#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int tab1[3][3], tab2[3][3],tab3[3][3];
	int i,j;
	 
	 printf("ingrese los valores de sus columnas y filas de la primer matriz\n");
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%i",&tab1[i][j]);
		}
	}
	
	printf("ingrese los valores de sus columnas y filas de la segunda matriz\n");
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%i",&tab2[i][j]);
		}
	}
	printf("La matriz resultante es\n");
	
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
		tab3[i][j]=tab1[i][j]*tab2[i][j];
	printf("   %i     ",tab3[i] [j]);
	
		}
		 printf("\n");
}
	return 0;
}
