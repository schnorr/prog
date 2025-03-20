#include <stdio.h>

int main() {
    
    //Variáveis de entrada
    float r, v, i;
    int escolha;
    //Variáveis auxiliares
    int lidos;

    //Entrada de dados
    printf("Escolha o que deseja calcular\n1.Resistencia\n2.Diferença de potencial\n3.Corrente eletrica\n");
    lidos = scanf("%d", &escolha);
    if (lidos != 1) {
        printf("Houve um erro na leitura!\n");
        return 1;
    }

    //Processamento e saída
    switch (escolha) { //Simula os if else encadeados, mas assim facilita legibilidade
        case 1:
            printf("Insira a diferença de potencial e a corrente respectivamente: ");
            lidos = scanf("%f %f", &v, &i);
            if (lidos != 2) {
                printf("Houve erro na leitura!\n");
                return 1;
            }

            r = v / i;
            printf("A resistencia eh de %.2f ohms\n", r);
            break;

        case 2:
            printf("Insira a resistencia e a corrente respectivamente: ");
            lidos = scanf("%f %f", &r, &i);
            if (lidos != 2) {
                printf("Houve erro na leitura!\n");
                return 1;
            }

            v = r * i;
            printf("A diferença de potencial eh de %.2f volts\n", v);
            break;

        case 3:
            printf("Insira a diferença de potencial e a resistencia respectivamente: ");
            lidos = scanf("%f %f", &v, &r);
            if (lidos != 2) {
                printf("Houve erro na leitura!\n");
                return 1;
            }

            i = v / r;
            printf("A corrente eh de %.2f amperes\n", i);
            break;

        default:
            printf("Escolha inválida\n");
    }
    
    return 0;
}
