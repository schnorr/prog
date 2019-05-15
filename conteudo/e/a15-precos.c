/*informar codigo da mercadoria com preco determinado
Entrada: precos de 90 mercadorias
Saida: impressao do codigo da mercadoria que vale R$ 123,00 */
#include <stdio.h>
#define CODMAX 99
#define CODMIN 10
int main () {
  int cod;
  // para usar indice 99, tem que declarar vetor com 100 elementos
  float preco[CODMAX+1];
  //obter preços
  for (cod = CODMIN; cod <= CODMAX; cod++) {
    printf("Entre o preco da mercadoria com codigo %d:", cod);
    scanf( “%f”, &preco[cod]);
  }
  //procurar produto de preço R$ 123,00
  for (cod = CODMIN; cod <= CODMAX; cod++)
    if (preco[cod] == 123)
      printf("Codigo desejado: %d \n", cod);
  return 0;
}
