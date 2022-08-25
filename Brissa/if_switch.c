#include <stdio.h>

int main()

{
  int num1 = 2;
  if (num1 > 2)
  {
    printf("es mayor");
  }
  else if (num1 == 1)
  {
    printf("num es 1");
  }
  else if (num1 == 2)
  {
    printf("num es 2");
  }
  else
  {
    printf("este es el default");
  }

  switch (num1)
  {
  case 1:
    printf("es el numero 1");
    break;
  case 2:
    printf("es el numero 2");
    break;
  case 3:
    printf("es el numero 3");
    break;
  default:
    printf("este es el default");
    break;
  }

  return 0;
}
