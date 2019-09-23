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
    if (str[i] >= 0+'0' && str[i] <= 9+'0'){
      contador++;
    }
  }
  printf("Numero de algarismos na string: %d\n", contador);
  for(i = 0; i < strlen(str); i++){
    if (str[i] >= 0+'0' && str[i] <= 9+'0'){
      if (str[i] == '9') str[i] = '0';
      else str[i] += 1;
    }
  }
  printf("String modificada: %s\n", str);
  return 0;
}
