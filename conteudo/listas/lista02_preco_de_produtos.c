  #include <stdio.h>

int main() {
    
    //Variáveis de entrada
    float v1, v2, v3, ref;
    //Variáveis auxiliares
    int lidos, aux = 0;
    float media;

    //Entrada de dados
    printf("Insira os valores dos produtos comprados: ");
    lidos = scanf("%f %f %f", &v1, &v2, &v3);
    if (lidos != 3) {
        printf("Houve erro na leitura!\n");
        return 1;
    }

    printf("Insira o valor de referencia: ");
    lidos = scanf("%f", &ref);
    if (lidos != 1) {
        printf("Houve erro na leitura!\n");
        return 1;
    }

    //Processamento
    media = (v1 + v2 + v3) / 3;

    //Saída de dados
    printf("Valor medio dos produtos: %.2f\n", media);
    if (ref < media) {
        //Determinar quais valores são inferiores ao de referência
        if (v1 < ref) {
            aux++;
            printf("O valor 1 eh inferior ao de referencia\n");
        }
        if (v2 < ref) {
            aux++;
            printf("O valor 2 eh inferior ao de referencia\n");
        }
        if (v3 < ref) {
            aux++;
            printf("O valor 3 eh inferior ao de referencia\n");
        }

        if (aux == 0) printf("Nenhum valor foi inferior ao de referencia\n");
    } else {
        //Determinar os valores que são inferiores a media
        if (v1 < media) {
            aux++;
            printf("O valor 1 eh inferior ao da media\n");
        }
        if (v2 < media) {
            aux++;
            printf("O valor 2 eh inferior ao da media\n");
        }
        if (v3 < media) {
            aux++;
            printf("O valor 3 eh inferior ao da media\n");
        }

        if (aux == 0) printf("Nenhum valor eh inferior ao da media\n");
    }
    return 0;
}
