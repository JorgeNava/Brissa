#include <stdio.h>

float variable1=10.1; // variable global

//void miFuncion( char miVariable)
void miFuncion()
{
    // float variable1=10.1; // variable local
    printf("miFuncion - el valor de la variable1 es: %f\n",variable1);
    //printf("miFuncion - valor es: %c\n",miVariable);
}



int main()
{
    // float variable1=10.1; // variable local
    
    // USO CON PARAMETROS, USO CORRECTO
    //char miVariable =  '1';
    //printf(" main - el valor es: %c\n",miVariable);
    //miVariable= '2';
    //miFuncion(miVariable);
    miFuncion();
    
    printf("main - el valor de la variable1 es: %f\n",variable1);
    
    return 0;
}