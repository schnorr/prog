/* Calcula e conversão de Real para Dolar */
#include <stdio.h> // biblioteca com operações de I/O
int main()
{
  float preco, taxa;          // Valores em real declarados float
  float precoemdolar;         // tipo da variável resultante
  printf("Valor em real:\n"); // mensagem impressa na tela
  scanf("%f", &preco);        // leitura da informação digitada
  printf("Taxa conversao :\n");
  scanf("%f", &taxa);
  precoemdolar = preco / taxa;
  printf("Preco em dolar: %.2f\n", precoemdolar); // mostra
  return 0; // encerra o programa e retorna zero ao Sist Op
}
