#include <stdio.h>

int main() {
    //Variáveis de entrada
    int n1, n2;
    //Variável auxiliar
    int lidos;
    //Variável de saída
    int multiplo;

    //entrada de dados
    printf("Insira os valores inteiros de n1 e n2: ");
    lidos = scanf("%d%d", &n1, &n2);
    if (lidos != 2) {
        printf("Houve um erro ao ler os valores!\n");
        return 1;
    }

    //Verificação se é múltiplo
    multiplo = n1 % n2 == 0;

    //Saída de dados
    if (multiplo == 1){
      printf("O valor %d eh multiplo de %d.\n", n1, n2);
    }
    return 0;
}
