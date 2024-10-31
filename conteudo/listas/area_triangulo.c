#include <stdio.h>

int main() {

    //declaração de variaveis
    //Variáveis de entrada
    float altura, base;
    //Variável de saída
    float area;
    //Variável auxiliar 
    int lidos;

    //entrada de dados
    printf("Insira a altura do triangulo: ");
    lidos = scanf("%f", &altura);
    if (lidos != 1) {
        printf("Houve um erro ao ler a altura!\n");
        return 1;
    }

    printf("Insira a base do triangulo: ");
    lidos = scanf("%f", &base);
    if (lidos != 1) {
        printf("Houve um erro ao ler a base!\n");
        return 1;
    }

    //cálculo da area
    area = base * altura / 2;

    //saída de dados
    printf("A area do triangulo de base %.1f e altura %.1f eh %.2f\n", base, altura, area);

    return 0;
}