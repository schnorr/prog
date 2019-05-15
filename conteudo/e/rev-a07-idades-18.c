#include <stdio.h>
int main () {
  int i;    //contador para controlar o for
  int soma; //acumulador de idade
  int cont; //contador de idade < 18
  soma = 0; // inicializa acumulador em 0
  cont = 0; // inicializa contador em 0
  for (i = 0; i < 5; i++) {
    printf("informe idade: ");
    scanf ("%d", &idade);
    if (idade < 18){
      cont++; // incrementa 1 no contador
    }
    soma += idade; //acumular as idades lidas
  }
  printf("O somatório das idades é %d.\n", soma);
  printf("Existem %d pessoas menores de 18 anos.\n", cont);
}
