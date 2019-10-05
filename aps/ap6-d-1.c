#include <stdio.h>
#include <string.h>
#define TAMMAX 100
int main() {
  //entrada
  char str[TAMMAX];
  //variáveis auxiliares
  int i;
  int contador;

  printf("Digite a string: ");
  fgets(str, TAMMAX, stdin);
  //Remover o \n
  if (str[strlen(str)-1] == '\n') {
    str[strlen(str)-1] = '\0';
  }

  contador = 0;
  for(i = 0; i < strlen(str); i++){
    //a letra é minuscula
    if (str[i] >= 'a' && str[i] <= 'z'){
      contador++;
    }
  }
  printf("Numero de letras em minusculo na string: %d\n", contador);
  for(i = 0; i < strlen(str); i++){
    if (str[i] >= 'a' && str[i] <= 'z'){
      if (str[i] == 'z') str[i] = 'a';
      else str[i] += 1;
    }
  }
  printf("String modificada: %s\n", str);
  return 0;
}
