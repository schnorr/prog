#include <stdio.h>
#include <float.h>
#include <math.h>

#define TAMMAX 7

int main() {
  //Entradas
  float vetor[TAMMAX];
  int n;
  //Auxiliares
  int i;
  float maior;
  float menor;
  float soma;
  float media;
  int perto;
  float distancia;
  float espalhamento;
  do {
    printf("Entre o numero de elementos no arranjo (valor menor ou igual a %d): ", TAMMAX);
    scanf("%d", &n);
  }while(n > TAMMAX);
  printf("Entre os %d valores reais: ", n);
  for (i = 0; i < n; i++){
    scanf("%f", &vetor[i]);
  }
  //procurar pelo maior e menor
  menor = FLT_MAX;
  maior = -FLT_MAX;
  soma = 0;
  for (i = 0; i < n; i++){
    if (vetor[i] > maior) maior = vetor[i];
    if (vetor[i] < menor) menor = vetor[i];
    soma += vetor[i];
  }
  media = soma / n;
  //quantidade de valores perto da media
  perto = 0;
  for (i = 0; i < n; i++){
    distancia = fabs(vetor[i] - media);
    espalhamento = 0.5 * (maior - menor);
    if (distancia < espalhamento) perto++;
  }
  printf("Menor valor: %f\n", menor);
  printf("Maior valor: %f\n", maior);
  printf("Media dos valores: %f\n", media);
  printf("Quantidade de valores perto da media: %d\n", perto);
  return 0;
}
