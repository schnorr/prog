#include <stdio.h>

int main() {
    
    //declaração de variaveis
    //Variáveis de entrada
    int prestacoes, p_pagas;
    float valor_prest;
    //Variável de saída 
    float devedor;
    //Variáveis auxiliares
    float total;
    int lidos;
    
    //entrada de dados
    printf("Insira a quantidade de prestações que ha no consorcio: ");
    lidos = scanf("%d", &prestacoes);
    if (lidos != 1) {
        printf("Houve erro ao ler a qtd de prestacoes\n");
        return 1;
    }

    printf("Quantas dessas prestações ja foram pagas? ");
    lidos = scanf("%d", &p_pagas);
    if (lidos != 1) {
        printf("Houve erro ao ler a qtd de prestacoes pagas\n");
        return 1;
    }

    printf("Insira o valor de cada prestacao: ");
    lidos = scanf("%f", &valor_prest);
    if (lidos != 1) {
        printf("Houve erro ao ler o valor da prestacao\n");
        return 1;
    }

    //calcular o total devedor e o que ja foi pago
    total = prestacoes * valor_prest;
    devedor = total - (p_pagas * valor_prest);

    //Saida de dados
    printf("O valor que ainda deve ser pago eh de R$%.2f\n", devedor);
  
    return 0;
}
