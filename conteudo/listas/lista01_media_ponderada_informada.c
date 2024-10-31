#include <stdio.h>

int main() {

    //declaração de variáveis 
    //Variáveis de entrada
    float nota1, nota2, nota3;
    int peso1, peso2, peso3;
    //Variável de saida
    float media = 0;
    //Variável auxiliar
    int lidos;

    //entrada de dados
    printf("Insira a primeira nota desse aluno: ");
    lidos = scanf("%f", &nota1);
    if (lidos != 1) {
        printf("Houve erro ao ler a primeira nota do aluno\n");
        return 1;
    }
    printf("insira agora o peso dessa primeira nota: ");
    lidos = scanf("%d", &peso1);
    if (lidos != 1) {
        printf("Houve erro ao ler o peso da primeira nota\n");
        return 1;
    }
    
    printf("Insira a segunda nota desse aluno: ");
    lidos = scanf("%f", &nota2); 
    if (lidos != 1) {
        printf("Houve erro ao ler a segunda nota do aluno\n");
        return 1;
    }
    printf("insira agora o peso dessa segunda nota: ");
    lidos = scanf("%d", &peso2);
    if (lidos != 1) {
        printf("Houve erro ao ler o peso da segunda nota\n");
        return 1;
    }

    printf("Insira a terceira nota desse aluno: ");
    lidos = scanf("%f", &nota3);
    if (lidos != 1) {
        printf("Houve erro ao ler a terceira nota do aluno\n");
        return 1;
    }
    printf("insira agora o peso dessa terceira nota: ");
    lidos = scanf("%d", &peso3);
    if (lidos != 1) {
        printf("Houve erro ao ler o peso da terceira nota\n");
        return 1;
    }

    //cálculo da média
    media  = (peso1 * nota1 + peso2 * nota2 + peso3 * nota3) / (peso1 + peso2 + peso3);

    //saída de dados
    printf("A media ponderada desse aluno eh: %.1f\n", media);

    return 0;
}
