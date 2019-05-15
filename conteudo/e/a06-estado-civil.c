/*Apresenta o estado civil correspondente ao caractere informado
  Entrada: abreviacao (caracter) do estado civil
  Saida: impressao na tela do estado civil (por extenso) */
#include <stdio.h>
int main ()
{
  char estado_civil;
  printf("Estado Civil (C - Casado, S - Solteiro, D - Divorciado ou V - Viuvo):");
  scanf("%c", &estado_civil);
  switch (estado_civil)
  {
  case 'c':
  case 'C': printf ("Casado\n");
    break;
  case 's':
  case 'S': printf ("Solteiro\n");
    break;
  case 'd':
  case 'D': printf ("Divorciado\n");
    break;
  case 'v':
  case 'V': printf ("Viuvo\n");
    break;
  default: printf ("Estado Civil incorreto\n");
  }
  return 0;
}
