#include <stdio.h>
int main (){
  char caractere;
  printf("Forneça um caractere: ");
  caractere = getchar();
  printf("O caractere digitado: ->[%c]<-\n", caractere);
  return 0;
}
