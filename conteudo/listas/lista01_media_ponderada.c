#include <stdio.h>

int main() {

    //declaração de variáveis 
    //entrada
    float nota1, nota2, nota3;
    //saida
    float media = 0;

    //entrada de dados
    printf("Insira a primeira nota desse aluno: ");
    scanf("%f", &nota1);
    printf("Insira a segunda nota desse aluno: ");
    scanf("%f", &nota2);
    printf("Insira a terceira nota desse aluno: ");
    scanf("%f", &nota3);

    //cálculo da média
    media  = (2 * nota1 + 3 * nota2 + 5 * nota3) / 10;

    //saída de dados
    printf("A media ponderada desse aluno eh: %.1f\n", media);

    return 0;
}
