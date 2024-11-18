#include <stdio.h>
#include <stdlib.h>
 int main() {
	
	int par=0,imp=1,val,cont,num;
	
	printf("Cuantos numeros?\n");
	scanf("%i",&num);
	
	for(cont=1;cont<=num;cont++){
		printf("Escriba el valor de su numero\n");
		scanf("%i",&val);
	if (val%2==0){
		par+=val;
	}
	else{
	    imp*=val;
   }
}
	printf("La suma de los numeros pares es %i\n",par);
	printf(" el producto de los numeros impares es %i \n",imp);
	return 0;
}

