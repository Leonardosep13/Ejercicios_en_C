#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int a,b,c;	
printf("Ingrese 3 numeros para ordenarlos\n");
scanf(" %d %d %d",&a,&b,&c);

if(a<b)
{
 if (a<c)
{
 if (b<c)
{printf("Los valores ordenados son: %d %d %d\n", a,b,c);}
else
{printf("Los valores ordenados son: %d %d %d\n", a,c,b);}
}
else
{printf("Los valores ordenados son: %d %d %d\n", c,a,b);}
}

else
{
if (a<c)
{printf("Los valores ordenados son: %d %d %d\n", b,a,c);}
else
{if (c<b)
{printf("Los valores ordenados son: %d %d %d\n", c,b,a);}
else
{printf("Los valores ordenados son: %d %d %d\n", b,c,a);}}
}
	return 0;
}
