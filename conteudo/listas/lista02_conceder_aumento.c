#include <stdio.h>

int main() {
    
    //Variáveis de entrada
    int id1, id2, id3, dep1, dep2, dep3, aumento = 0;
    float ref, s1, s2, s3;
    //Variáveis auxiliares 
    int lidos;

    //Entrada de dados
    printf("Entre com o valor de referencia: ");
    lidos = scanf("%f", &ref);
    if (lidos != 1) {
        printf("Houve um erro na leitura!\n");
        return 1;
    }

    //Funcionario 1
    printf("Insira o id, numero de dependentes e salário do funcionario 1: ");
    lidos = scanf("%d %d %f", &id1, &dep1, &s1);
    if (lidos != 3) {
        printf("Houve erro na leitura!\n");
        return 1;
    }

    //Funcionario 2
    printf("Insira o id, numero de dependentes e salário do funcionario 2: ");
    lidos = scanf("%d %d %f", &id2, &dep2, &s2);
    if (lidos != 3) {
        printf("Houve erro na leitura!\n");
        return 1;
    }

    //Funcionario 3
    printf("Insira o id, numero de dependentes e salário do funcionario 3: ");
    lidos = scanf("%d %d %f", &id3, &dep3, &s3);
    if (lidos != 3) {
        printf("Houve erro na leitura!\n");
        return 1;
    }



    //Processamento e saída de dados
    if (dep1 > 2 || s1 < ref) {
        printf("Funcionario 1 recebera aumento!\n");
        aumento++;
    }
    if (dep2 > 2 || s2 < ref) {
        printf("Funcionario 2 recebera aumento!\n");
        aumento++;
    }
    if (dep3 > 2 || s3 < ref) {
        printf("Funcionario 3 recebera aumento!\n");
        aumento++;
    }

    printf("No total foram %d aumentos!\n", aumento);

    return 0;
}
