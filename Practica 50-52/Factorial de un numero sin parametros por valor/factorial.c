#include <stdio.h>
#include <stdlib.h>

void imp(){
	printf("Ingresa un numero para sacar su factorial\n");
}
void imp2(){
	printf("Tu factorial es:");
}


int main(int argc, char *argv[]) {
	int n, fac;
	
	imp();
	scanf("%i",&n);
	    fac=n-1;
    do{
        n=n*fac;
        fac--;}
    while (fac>1);
    
    imp2();
    printf("%i",n);
    
	return 0;
}
