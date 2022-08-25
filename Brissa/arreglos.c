
#include <stdio.h>

int main()
{
    //declaracion arreglo 
    int A[4];
    int i;
    A[0] = 1;
    A[1] = 2;
    A[2] = 3;
    A[3] = 4;
    
  
     //iterando atravez de un arreglo
    for(i=0;i<4;i++)
    {
        printf(" %i\n",A[i]);
    }
    
    
    return 0;   
}