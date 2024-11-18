#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	
	int num, pot,num2;
	
	printf("escriba el numero que desea elevar\n");
	scanf("%i",&num);
	printf("escriba la potencia a la que desea elevar\n");
	scanf("%i",&pot);
	num2=num;
	
	while (pot>1){
		num*=num2;
		pot=0;
	}
	printf("su resultado es %i",num);
	return 0;
}
