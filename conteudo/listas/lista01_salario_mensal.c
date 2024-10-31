#include <stdio.h>

int main() {
    
    //declaração de variaveis
    //Variáveis de entrada
    int id, carros_vendidos;
    float total_vendas, salario_fixo, valor_carro;
    //Variável de saída
    float salario_final;
    //Variável auxiliar
    int lidos;

    //entrada de dados
    printf("Insira o numero do vendedor: ");
    lidos = scanf("%d", &id);
    if (lidos != 1) {
        printf("Houve erro ao ler o numero do vendedor\n");
        return 1;
    }

    printf("Insira o numero de carros vendidos por esse vendedor: ");
    lidos = scanf("%d", &carros_vendidos);
    if (lidos != 1) {
        printf("Houve erro ao ler o numero de carros vendidos\n");
        return 1;
    }

    printf("Insira o valor total das vendas desse vendedor: ");
    lidos = scanf("%f", &total_vendas);
    if (lidos != 1) {
        printf("Houve erro ao ler o total de vendas\n");
        return 1;
    }

    printf("Insira o salario fixo do vendedor: ");
    lidos = scanf("%f", &salario_fixo);
    if (lidos != 1) {
        printf("Houve erro ao ler o salario fixo\n");
        return 1;
    }

    printf("Insira o valor que ele recebe por carro vendido: ");
    lidos = scanf("%f", &valor_carro);
    if (lidos != 1) {
        printf("Houve erro ao ler o valor recebido por carro\n");
        return 1;
    }

    //calcula o salario final dele
    salario_final = salario_fixo + (carros_vendidos * valor_carro) + 0.05 * total_vendas;

    //Saida de dados
    printf("O salario do vendedor de numero %d recebeu R$%.2f esse mes\n", id, salario_final);
  
    return 0;
}
