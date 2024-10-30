#include <stdio.h>
#include <math.h>

int main() {

    //delcaração de variaveis
    //Variáveis de entrada
    float peso, altura;
    //Variável de saída
    float imc;
    //Variável auxiliar
    int lidos;

    //entrada de dados
    printf("Insira o peso do individuo (em kg): ");
    lidos = scanf("%f", &peso);
    if (lidos != 1) {
        printf("Houve erro ao ler o peso\n");
        return 1;
    }

    printf("Insira a altura do individuo (em m): ");
    lidos = scanf("%f", &altura);
    if (lidos != 1) {
        printf("Houve erro ao ler a altura\n");
        return 1;
    }

    //calculo do imc
    imc = peso / pow(altura, 2);

    //daida de dados
    printf("O indice de massa corporal (IMC) desse individuo eh %.2fkg/m²\n", imc);

    return 0;
}