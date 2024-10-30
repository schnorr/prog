#include <stdio.h>
#include <math.h>

int main() {
    
    //declaração de variaveis
    //Variáveis de entrada
    float largura, comprimento, pinta_tinta, custo_lata;
    int chapas;
    //Variável de saída
    int latas;
    //VAriável auxiliar
    int lidos;
    
    //entrada de dados
    printf("Insira a quantidade de chapas de madeira que deseja pintar: ");
    lidos = scanf("%d", &chapas);
    if (lidos != 1) {
        printf("Houve erro ao ler a qtd de chapas\n");
        return 1;
    }

    printf("Insira a largura dessas chapas: ");
    lidos = scanf("%f", &largura);
    if (lidos != 1) {
        printf("Houve erro ao ler a largura\n");
        return 1;
    }

    printf("Insira o comprimento dessas chapas: ");
    lidos = scanf("%f", &comprimento);
    if (lidos != 1) {
        printf("Houve erro ao ler o comprimento\n");
        return 1;
    }

    printf("Insira o preço de cada lata de tinta: ");
    lidos = scanf("%f", &custo_lata);
    if (lidos != 1) {
        printf("Houve erro ao ler o cursto de cada lata\n");
        return 1;
    }

    printf("Insira a quantidade de m² que podem ser pintados com cada lata: ");
    lidos = scanf("%f", &pinta_tinta);
    if (lidos != 1) {
        printf("Houve erro ao ler o quanto pode ser pintado com uma lata\n");
        return 1;
    }
    
    //Calcular a qtd de latas
    latas = ceil(chapas * (largura * comprimento) / pinta_tinta);

    //Saida de dados
    printf("Serao necessarias %d latas de tinta e o custo seria de %.2f\n", latas, latas * custo_lata);
  
    return 0;
}