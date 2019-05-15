/*Repete várias vezes o cálculo do fatorial
Entradas: numeros inteiros positivos
Saida: fatorial do numero ou mensagem de erro */
#include <stdio.h>
int main () {
  int num, fat, i, resposta;
  do {
    printf("Entre um numero inteiro positivo: " );
    scanf("%d", &num);
    while (num < 0){
      printf("Número positivo!! Forneça novamente: " );
      scanf("%d", &num);
    }
    fat = 1; // se for zero, está pronto
    for (i= num; i >= 1; i--)
      fat = fat * i;
    printf ("Fatorial de %d eh %d.\n", num, fat);

    printf ("Quer calcular outro número? Sim(1) ou Não(0): ");
    scanf("%d", &resposta);
  }while(resposta);
  return 0;
}
