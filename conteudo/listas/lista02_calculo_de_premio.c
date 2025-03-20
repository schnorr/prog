#include <stdio.h>

int main() {
    
    //Variáveis de entrada
    int id, vendas;
    float salario;
    //Variáveis auxiliares 
    int lidos;

    //Entrada de dados
    printf("Entre com o id do vendedor: ");
    lidos = scanf("%d", &id);
    if (lidos != 1) {
        printf("Houve um erro na leitura!\n");
        return 1;
    }

    printf("Entre com o total de vendas e o salario, repectivamente: ");
    lidos = scanf("%d %f", &vendas, &salario);
    if (lidos != 2) {
        printf("Houve um erro na leitura!\n");
        return 1;
    }

    //Processamento e saída de dados
    if (100 < vendas && vendas <= 500) salario += 50;
    else if (500 < vendas && vendas <= 750) salario += 70;
    else if (750 < vendas) salario += 100;

    printf("O salario final do vendedor eh de R$%.2f\n", salario);

    return 0;
}
