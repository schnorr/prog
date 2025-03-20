#include <stdio.h>

int main() {
    
    //Variáveis de entrada
    int idade, horas;
    char trabalha;
    float salario, salario_por_hora;
    //Variáveis auxiliares 
    int lidos;

    //Entrada de dados
    printf("Entre com o idade: ");
    lidos = scanf("%d", &idade);
    if (lidos != 1) {
        printf("Houve um erro na leitura!\n");
        return 1;
    }

    if (idade < 18) {      //Sendo menor de 18, encerramos a pesquisa
        printf("Eh menor de idade, encerraremos o programa!\n");
        return 0;
    } 
    
    if (idade > 16) {   //Se a idade for maior que 16, perguntamos sobre o trabalho 
        printf("Esta trabalhando (S ou N): ");
        lidos = scanf(" %c", &trabalha);
        if (lidos != 1) {
            printf("Houve erro na leitura!\n");
            return 1;
        }
        
        if (trabalha == 'S') {
            printf("Quantas horas trabalha e quanto eh o salario? ");
            lidos = scanf("%d %f", &horas, &salario);
            if (lidos != 2) {
                printf("Houve erro na leitura!\n");
                return 1;
            }

            salario_por_hora = salario / horas;

            printf("Essa pessoa ganha R$%.2f por hora trabalhada!\n", salario_por_hora);
        } else {
            printf("Nao trabalha\n");
        }

    } else {        //Senão, encerramos o programa 
        printf("Idade inferior a 16 anos\n");
        return 0;
    }

    return 0;
}
