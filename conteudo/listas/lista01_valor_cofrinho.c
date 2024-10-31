#include <stdio.h>

int main() {
    
    //declaração de variaveis
    //Variáveis de entrada
    int n1, n2, n3, n4, n5;
    //Variável de saída
    float total;
    //Variável auxiliar
    int lidos;
    
    //entrada de dados
    printf("Insira a quantidade de moedas de 1 real: ");
    lidos = scanf("%d", &n1);
    if (lidos != 1) {
        printf("Houve erro ao ler a qtd de moedas de 1 real\n");
        return 1;
    }
    
    printf("Insira a quantidade de moedas de 50 centavos ");
    lidos = scanf("%d", &n2);
    if (lidos != 1) {
        printf("Houve erro ao ler a qtd de moedas de 50 centavos\n");
        return 1;
    }

    printf("Insira a quantidade de moedas de 25 centavos: ");
    lidos = scanf("%d", &n3);
    if (lidos != 1) {
        printf("Houve erro ao ler a qtd de moedas de 25 centavos\n");
        return 1;
    }

    printf("Insira a quantidade de moedas de 10 centavos: ");
    lidos = scanf("%d", &n4);
    if (lidos != 1) {
        printf("Houve erro ao ler a qtd de moedas de 10 centavos\n");
        return 1;
    }

    printf("Insira a quantidade de moedas de 5 centavos: ");
    lidos = scanf("%d", &n5);
    if (lidos != 1) {
        printf("Houve erro ao ler a qtd de moedas de 5 centavos\n");
        return 1;
    }

    //calcula o valor total de moneys
    total = n1 + n2 * 0.5 + n3 * 0.25 + n4 * 0.10 + n5 * 0.05; 

    //Saida de dados
    printf("O total de monetarios que voce tem eh %.2f\n", total);
  
    return 0;
}
