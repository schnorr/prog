#include <stdio.h>
#include <math.h>

int main() {
    
    //Variáveis de entrada
    float a, b, c;
    //Variáveis auxiliares
    int lidos;

    //Entrada de dados 
    printf("Entre com os valores dos lados: ");
    lidos = scanf("%f %f %f", &a, &b, &c);
    if (lidos != 3) {
        printf("Houve um erro na leitura!\n");
        return 1;
    }

    //Processamento e saída de dados
    if (fabs(b - c) < a && a < b + c &&
        fabs(a - c) < b && b < a + c &&
        fabs(a - b) < c && c < a + b) {
            printf("Os lados inseridos podem formar um triângulo!\n");
    } else {
        printf("Os lados nao correspondem a um triangulo!\n");
    }
    
    return 0;
}
