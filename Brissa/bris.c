#include <iostream>

 void funcionsuma( int num, int num2, char caracter){
	int i;
	int resultado = 0;
	for (i = 0, )
 }
 void funcionmultiplicacion(){
    
 }
 
 
	// funciones



	// switch - break

	// variables globales

	// arreglos


 
 
 int funcionEjemplo(int param1){
	int opc, num;
	printf("Que deseas hacer\n");
	printf("1) Sumatoria (1+2+3+4+...+n).\n");
	printf("2) Multiplicacion(1*2*3*4*...*n \n");
	printf("opcion:");
	scanf("%i", &opc);
	switch (opc)
	{
	case 1:
		printf("dame un numero entero del 0 al 10 :\n");
		scanf("%i", &num);

		break;
	case 2:
		printf("dame un numero entero del 0 al 10 :\n");
		scanf("%i", &num);
		break;
	default:
		printf("esa nocion no es valida:\n");
		break;
	}

	return 0;
    
}
int myParam = 1
funcionEjemplo(myParam)
funcionEjemplo()
funcionEjemplo()
funcionEjemplo()
funcionEjemplo()













Variables  global, local 
Int función (int a, int b, int c, int d…);
Es lo mismo 
Int función (int a[ ] );

#include <stdio.h>
Int a; (VARIABLE GLOBAL )
int main ()
Int b;
(VARIABLE LOCAL)
{
	printf("hola mundo");

	return 0;
    
}

#include <stdio.h>
 
 int num;
 void funcion ()
 {
	printf("el valor es:%i", num);
 }
 int main ()
 {
	printf("dame el valor");
	scanf("%i", &num);
	funcion(num);
	return 0;
 }
