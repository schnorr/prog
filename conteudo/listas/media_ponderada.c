#include <stdio.h>

int main() {

    //declaração de variáveis 
    //Variáveis de entrada
    float nota1, nota2, nota3;
    //Variável de saida
    float media = 0;
    //Variável auxiliar
    int lidos;

    //entrada de dados
    printf("Insira a primeira nota desse aluno: ");
    lidos = scanf("%f", &nota1);
    if (lidos != 1) {
        printf("Houve erro ao ler a primeira nota\n");
        return 1;
    }

    printf("Insira a segunda nota desse aluno: ");
    lidos = scanf("%f", &nota2);
    if (lidos != 1) {
        printf("Houve erro ao ler a segunda nota\n");
        return 1;
    }

    printf("Insira a terceira nota desse aluno: ");
    lidos = scanf("%f", &nota3);
    if (lidos != 1) {
        printf("Houve erro ao ler a terceira nota\n");
        return 1;
    }

    //cálculo da média
    media  = (2 * nota1 + 3 * nota2 + 5 * nota3) / 10;

    //saída de dados
    printf("A media ponderada desse aluno eh: %.1f\n", media);

    return 0;
}