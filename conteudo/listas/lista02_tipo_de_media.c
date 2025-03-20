#include <stdio.h>

int main() {
    
    //Variáveis de entrada
    int tipo;
    float n1, n2, n3, media;
    //Variáveis auxiliares 
    int lidos;

    //Entrada de dados
    printf("Entre com o tipo de media\n1.Aritmetica\n2.Ponderada (pesos 3, 3, 4)\n3.Harmonica\n");
    lidos = scanf("%d", &tipo);
    if (lidos != 1) {
        printf("Houve um erro na leitura!\n");
        return 1;
    }

    if (tipo < 1 || tipo > 3) {
        printf("Tipo inválido!\n");
        return 1;
    }

    printf("Entre com as 3 notas: ");
    lidos = scanf("%f %f %f", &n1, &n2, &n3);
    if (lidos != 3) {
        printf("Houve um erro na leitura!\n");
        return 1;
    }

    //Processamento e saída de dados
    if (tipo == 1) {
        media = (n1 + n2 + n3) / 3;
        printf("A media aritmetica ficou em %.1f\n", media);
    } else if (tipo == 2) {
        media = (3 * n1 + 3 * n2 + 4 * n3) / 10;
        printf("A media ponderada 3 3 4 ficou em %.1f\n", media);
    } else {
        media = 3 / (1 / n1 + 1 / n2 + 1 / n3);
        printf("A media harmonica fechou em %.1f\n", media);
    }

    return 0;
}
