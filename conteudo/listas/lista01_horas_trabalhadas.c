#include <stdio.h>
int main(){
  //variáveis de entrada
  int horas_trabalhadas;
  float valor_por_hora;
  //variável auxiliar
  int lidos;
  //variáveis de saída
  float salario;

  //entrada de dados
  printf("Forneça a quantidade de horas trabalhadas: ");
  lidos = scanf("%d", &horas_trabalhadas);
  if (lidos != 1){
    printf("Problema na leitura das horas trabalhadas.\n");
    return 1;
  }
  printf("Forneça o valor por hora trabalhada: ");
  lidos = scanf("%f", &valor_por_hora);
  if (lidos != 1){
    printf("Problema na leitura do valor por hora trabalhada.\n");
    return 1;
  }

  //cálculo da saída
  salario = horas_trabalhadas * valor_por_hora;

  //saída de dados
  printf("O salário deste funcionário é: %.2f\n", salario);

  //terminar o programa
  return 0;
}
