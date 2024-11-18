#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
int tab1[4][4];
int diagonal[4];
	int i,j;
	 
	for (i=0;i<4;i++){
		for(j=0;j<4;j++){
			tab1[i][j]=rand() % 100;
		}
	}
	
	
printf("\nElementos de la diagnal principal\n");
   for(i=0;i<4;i++){
      printf("El elemento de la diagonal (%d),(%d) es : %d\n",i,i,tab1[i][i]);
  }
	return 0;
}
