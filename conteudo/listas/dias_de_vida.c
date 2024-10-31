#include <stdio.h>

int main() {
    
    //declaração de variaveis
    //Variáveis de entrada
    int anos, meses, dias;
    //Variável de saída
    int total_dias;
    //Variável auxiliar
    int lidos;

    //entrada de dados
    printf("Insira quantos anos essa pessao viveu: ");
    lidos = scanf("%d", &anos);
    if (lidos != 1) {
        printf("Houve erro ao ler os anos\n");
        return 1;
    }
    
    printf("Insira quantos meses essa pessao viveu: ");
    lidos = scanf("%d", &meses);
    if (lidos != 1) {
        printf("Houve erro ao ler os meses\n");
        return 1;
    }

    printf("Insira quantos dias essa pessao viveu: ");
    lidos = scanf("%d", &dias);
    if (lidos != 1) {
        printf("Houve erro ao ler os dias\n");
        return 1;
    }

    //Calcular quantos dias de vida essa pessoa teve
    total_dias = 365 * anos + 30 * meses + dias;

    //Saida de dados
    printf("Essa pessoa viveu por %d dias\n", total_dias);
  
    return 0;
}