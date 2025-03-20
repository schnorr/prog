#include <stdio.h>

int main() {
    
    //Variáveis de entrada
    int idade;
    //Variáveis auxiliares 
    int lidos;

    //Entrada de dados
    printf("Entre com a idade do individuo: ");
    lidos = scanf("%d", &idade);
    if (lidos != 1) {
        printf("Houve um erro na leitura!\n");
        return 1;
    }

    //Processamento e saída de dados
    if (idade < 5) printf("Maninho eh novo demais pra se classificar!\n");
    else if (idade <= 7) printf("Esta na categoria Infantil A\n");
    else if (idade <= 10) printf("Esta na categoria Infantil B\n");
    else if (idade <= 13) printf("Esta na categoria Juvenil A\n");
    else if (idade <= 17) printf("Esta na categoria Juvenil B\n");
    else printf("Esta na categoria Senior\n");

    return 0;
}
