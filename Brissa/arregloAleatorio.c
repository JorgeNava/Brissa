//uso de funcion para dar numeros aleatorios
//llenado de arreglo con numero aleatorios


#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracion arreglo 
   int B[100];
   int i;
   
  
     //iterando atravez de un arreglo
    for(i=0;i<=99;i++)
    {
        B[i]=rand();
        printf(" %i\n",B[i]);
        
        
    }
    
    
    return 0;   
}
