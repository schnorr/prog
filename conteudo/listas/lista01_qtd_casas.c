#include <stdio.h>
#include <math.h>

#define TOTAL 10000000

int main() {
    
    //declaração de variaveis
    //Variável de entrada
    float salario_min;
    //Variável de saída
    int casas;
    //Variável auxiliar
    int lidos;

    //entrada de dados
    printf("Insira o valor do salario minimo a ser considerado: ");
    lidos = scanf("%f", &salario_min);
    if (lidos != 1) {
        printf("Houve erro ao ler o salario minimo\n");
        return 1;
    }

    //Calcula o numero de casas
    casas = floor(TOTAL / (150 * salario_min));

    //Saida de dados
    printf("Serao construidas %d casas\n", casas);
  
    return 0;
}
