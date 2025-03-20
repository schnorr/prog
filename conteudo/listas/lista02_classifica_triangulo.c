#include <stdio.h>

int main() {
    
    //Variáveis de entrada
    float a, b, c;
    //Variáveis auxiliares
    int lidos;


    //Entrada de dados
    printf("Insira os valores dos lados: ");
    lidos = scanf("%f %f %f", &a, &b, &c);
    if (lidos != 3) {
        printf("Houve erro na leitura!\n");
        return 1;
    }

    //Saída de dados
    if (a == b && b == c) printf("O triangulo eh equilatero!\n");
    else if (a == b || b == c || a == c) printf("O triangulo eh isosceles!\n");
    else printf("O triangulo eh escaleno!\n");

    return 0;
}
