#include <stdio.h>

void imrpimirHola(){
        int numero1;
    printf("este es tu numero");
     printf("%i",numero1);
    
}

int sumarDosNumeros(int a, int b)
{
    int resultado = a+b;
    return resultado;
}


    int restardosnumeros (int a, int b)
    {
        int resultado= a-b;
        return resultado;
    }



int main()

{
    int miVariable, resultadoFinal;
    //printf("dame un numero");
    // scanf("%i",&numero1);
    //imrpimirHola(numero1);
    
    printf("%i\n",restardosnumeros(10,1));
    printf("%i\n",restardosnumeros(7,1));
    printf("%i\n",sumarDosNumeros(3,1));
    
    
    miVariable=sumarDosNumeros(4,5);
    miVariable=sumarDosNumeros( miVariable,2);
    

    
    printf("%i",miVariable);
    

    return 0;
}
