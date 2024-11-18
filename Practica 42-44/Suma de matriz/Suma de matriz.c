#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i=0,j=0,suma=0;
	int columna[3];
	for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 		printf("   %i     ",matriz[i] [j]);
			 }
			 printf("\n");
			 }
for(j=0;j<3;j++)
{
    suma=0;
    for(i=0;i<3;i++)
    {
        suma+=matriz[i][j];
    }
    columna[j]=suma;
}
for(j=0;j<3;j++){
	printf("El resultado de la suma de la columna es %i\n",columna[j]);
}
return 0;
}
