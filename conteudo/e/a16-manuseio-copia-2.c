/* Copiar uma string para outra, e imprimir a string copia
Entradas: string lida do teclado
Saidas: copia da string lida e impressao na tela */
#include<stdio.h>
#define TAMSTRING 30
int main()
{
  char str_in[TAMSTRING], str_out[TAMSTRING];
  int cont = 0; // contador para caracteres das strings
  printf("Entre o texto: ");
  fgets(str_in, TAMSTRING, stdin);
  printf("String lida foi ->[%s]<-\n", str_in);
  // varre a string lida ate achar '\0'
  while (str_in[cont]!='\0') {
    str_out[cont] = str_in[cont];
    cont++;
  }
  str_out[cont]='\0'; //<--- Veja a correção AQUI
  printf("->[%s]<-\n", str_out);
  return 0;
}
