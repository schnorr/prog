#include <stdio.h>

int main() {
    
    //Variáveis de entrada
    float p1, p2, p3;
    //Variáveis auxiliares
    int lidos;
    float media;
    //Variáveis de saída
    int abaixo = 0;


    //Entrada de dados
    printf("Insira os valores das alturas: ");
    lidos = scanf("%f %f %f", &p1, &p2, &p3);
    if (lidos != 3) {
        printf("Houve erro na leitura!\n");
        return 1;
    }

    //Processamento 
    media = (p1 + p2 + p3) / 3;

    if (p1 < media) abaixo++;
    if (p2 < media) abaixo++;
    if (p3 < media) abaixo++;

    //Saída de dados
    if (abaixo == 0) printf("Nenhuma pessoa esta abaixo da media!\n");
    else printf("Temos %d pessoas abaixo da media!\n", abaixo);

    return 0;
}
