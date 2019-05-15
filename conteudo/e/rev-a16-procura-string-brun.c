#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_TEXTAO  100
#define TAMANHO_TEXTINHO 10

int main()
{
    char textao[TAMANHO_TEXTAO];
    char textinho[TAMANHO_TEXTINHO];
    int contador1, contador2, contador3;
    int achei_o_textinho_no_textao;
    int cheguei_no_final_do_textinho;
    int cheguei_no_final_do_textao;
    int diferenca_textinho_textao;
    int textinho_diferente_do_textao;

    printf("Digite o textao: ");
    fgets(textao, TAMANHO_TEXTAO, stdin);

    int tamanho_da_entrada_textao = strlen(textao);
    textao[tamanho_da_entrada_textao - 1] = '\0';


    printf("Digite o textinho: ");
    fgets(textinho, TAMANHO_TEXTINHO, stdin);

    int tamanho_da_entrada_textinho = strlen(textinho);
    textinho[tamanho_da_entrada_textinho - 1] = '\0';

    for(contador1 = 0; contador1 < TAMANHO_TEXTAO; contador1++){
        contador2 = contador1;
        contador3 = 0;
        diferenca_textinho_textao = 0;
        textinho_diferente_do_textao = 0;
        cheguei_no_final_do_textinho = 0;
        cheguei_no_final_do_textao = 0;

        while(!cheguei_no_final_do_textinho &&
              !cheguei_no_final_do_textao &&
              !textinho_diferente_do_textao){

            diferenca_textinho_textao = textinho[contador3] - textao[contador2];

            contador2++;
            contador3++;

            if(diferenca_textinho_textao != 0)
                textinho_diferente_do_textao = 1;

            if(contador3 >= TAMANHO_TEXTINHO)
                cheguei_no_final_do_textinho = 1;

            if(textinho[contador3] == '\0')
                cheguei_no_final_do_textinho = 1;

            if(textao[contador2] == '\0')
                cheguei_no_final_do_textao = 1;

        }
        if(textinho_diferente_do_textao == 0){
            printf("[%s] encontrado na posicao %d\n", textinho, contador1);
        }
    }
    return 0;
}
