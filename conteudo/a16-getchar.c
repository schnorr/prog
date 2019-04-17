#include <stdio.h>
int main (){
  char ch;
  printf("Forneça um caractere: ");
  ch = getchar();
  printf("O caractere digitado: ->[%c]<-\n", ch);
  return 0;
}
