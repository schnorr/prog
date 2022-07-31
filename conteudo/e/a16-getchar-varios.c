#include <stdio.h>
int main (){
  char caractere;
  do {
    printf("Forneça um caractere: ");
    caractere = getchar();
    printf("O caractere digitado: ->[%c]<-\n", caractere);
  }while(caractere != 'p');
  return 0;
}
