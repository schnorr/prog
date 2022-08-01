/*informar codigo da mercadoria com preco determinado
Entrada: precos de 90 mercadorias
Saida: impressao do codigo da mercadoria que vale R$ 123,00 */
#include <stdio.h>
#define CODMAX 99
#define CODMIN 10
int main () {
  int cod;
  int achou; // flag que indica se achou codigo (vale 0 ou 1)
  // para usar indice 99, tem que declarar vetor com 100 elementos
  float preco[(CODMAX-CODMIN)+1];
  //obter preços
  for (cod = CODMIN; cod <= (CODMAX-CODMIN); cod++) {
    printf("Entre o preco da mercadoria com codigo %d:", cod);
    scanf("%f", &preco[cod-CODMIN]);
  }

  //procurar produto de preço R$ 123,00
  achou = 0;
  cod = CODMIN;
  do {
    if (preco[cod-CODMIN] == 123)
      achou = 1;
    cod++;
  }while (cod <= CODMIN+(CODMAX-CODMIN) && achou == 0);

  if (achou == 1){
    printf("Codigo desejado: %d\n", cod-1);
  }else{
    printf("Codigo não encontrado!\n");
  }
  return 0;
}
