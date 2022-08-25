#include <stdio.h>
#include <string.h>

int main()
{
    //declarando variables en una cadena de caracteres 
    char cadena[]={'h','o','l','A'};
    //declarando variable de longitud de cadena, strlen viene de string.h=devuelve la longitud de la cadena especificada en bytes, a excepción del byte nulo final.
    int longitud = strlen(cadena);
    //declarando varibale con tipo de dato caracter definiendo la longitud igual a la longitud de la cadena Original
    char cadenaInvertida[longitud];

    printf("Original: ");
    //ciclo que recorre la cadena en base a su longitud
    for(int i=0;i<longitud;i++)
    {
        printf("%c",cadena[i]);
        
    }
    printf("\n");

    printf("Invertido: ");
    for (int i = 0; i <= longitud; i++) {
        cadenaInvertida[i] = cadena[longitud - i];
        printf("%c",cadenaInvertida[i]);
    }
    return 0;   
}