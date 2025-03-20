#include <stdio.h>

int main() {
    
    //Variáveis de entrada
    float altura;
    char sexo;
    //Variáveis auxiliares
    int lidos;
    //Variáveis de saída
    float peso_ideal;

    //Entrada de dados
    printf("Insira a altura: ");
    lidos = scanf("%f", &altura);
    if (lidos != 1) {
        printf("Houve erro na leitura!\n");
        return 1;
    }

    printf("Insira on sexo (M ou F): ");
    lidos = scanf(" %c", &sexo);            //Espaço na frente pelo buffer do teclado
    if (lidos != 1) {
        printf("Houve erro na leitura!\n");
        return 1;
    } else if (sexo != 'M' && sexo != 'F') {
        printf("Sexo inserido eh invalido!\n");
        return 1;
    }

    //Processamento 
    if (sexo == 'M') 
        peso_ideal = 72.7 * altura - 58;
    else 
        peso_ideal = 62.1 * altura - 44.7;
    

    //Saída de dados
    printf("O peso ideal eh %.2f\n", peso_ideal);

    return 0;
}
