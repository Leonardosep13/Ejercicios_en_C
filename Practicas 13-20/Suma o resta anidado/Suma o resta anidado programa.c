#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int a,b,men,res;
    
    printf("Seleccione que desea hacer\n 1.suma\n 2.resta\n");
    scanf("%i",&men);
    if (men!=1&&men!=2)
     {printf("esa opcion no existe\n");}
     
if (men==1)
    {printf("Escriba dos numeros para sumar\n");
    scanf("%i %i",&a,&b);
    res=a+b;
    printf("su resultado es: %i\n",res);}
if (men==2)
    {printf("Escriba dos numeros para restar\n");
    scanf("%i %i",&a,&b);
    res=a-b;
    printf("su resultado es: %i\n",res);}
	return 0;
}
