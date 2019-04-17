#include <stdio.h>
int main (){
  char ch;
  do {
    printf("Forneça um caractere: ");
    ch = getchar();
    printf("O caractere digitado: ->[%c]<-\n", ch);
  }while(ch != 'p');
  return 0;
}
