#include <stdio.h>

int main() {

    //declaração de variaveis
    //Variável de entrada
    float t_graus;
    //Variável de saída
    float t_fahrenheit;
    //VAriável auxiliar
    int lidos;

    //entrada de dados
    printf("Insira a temperatura em graus celsius: ");
    lidos = scanf("%f", &t_graus);
    if (lidos != 1) {
        printf("Houve erro ao ler a temperatura em graus Celsius\n");
        return 1;
    }

    //calculo da temperatura
    t_fahrenheit = t_graus * 1.8 + 32;

    //saida de dados
    printf("%.2f em graus Celsius corresponde a %.2f em graus fahrenheit\n", t_graus, t_fahrenheit);

    return 0;
}
