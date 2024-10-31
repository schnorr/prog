#include <stdio.h>

int main() {

    //declaracao de variaveis
    //Variável de entrada
    int dig;
    //VAriável de saída
    int total_digitos = 0;
    //Variável auxiliar
    int lidos;

    //entrada de dados
    printf("Insira um inteiro de 3 digitos: ");
    lidos = scanf("%d", &dig);
    if (lidos != 1) {
        printf("Houve erro ao ler o numeor inteiro de 3 digitos\n");
        return 1;
    }
    
    //calcular os valores
    /*
        Logica utilizada
        pra pegar a centena, pegamos a parte inteira da divisão por 100
        pra pegar a dezena, pegamos o resto da divisao por 100 que dará um valor entre 0 e 99, e dividimos ele por 10
        pra pegar a unidade eh so fazer o modulo por 10 msm
    */

    total_digitos += dig / 100 + ((dig % 100) / 10) + dig % 10;

    //saida de dados
    printf("A soma dos digitos de %d eh %d\n", dig, total_digitos);

    return 0;
}
