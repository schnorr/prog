#include <stdio.h>

int main() {
    
    //declaração de variaveis  
    //Variáveis de entrada
    float c_casa, c_terreno, l_casa, l_terreno;
    //Variáveis de saída
    float livre, livre_percent;
    //Variável auxiliar
    int lidos;
    
    //entrada de dados
    printf("Insira o comprimento total do terreno (em metros): ");
    lidos = scanf("%f", &c_terreno);
    if (lidos != 1) {
        printf("Houve erro ao ler o comprimento do terreno\n");
        return 1;
    }
    printf("Insira a largura total do terreno (em metros): ");
    lidos = scanf("%f", &l_terreno);
    if (lidos != 1) {
        printf("Houve erro ao ler a largura do terreno\n");
        return 1;
    }

    printf("Insira o comprimento total da casa (em metros): ");
    lidos = scanf("%f", &c_casa);
    if (lidos != 1) {
        printf("Houve erro ao ler o comprimento da casa\n");
        return 1;
    }
    printf("Insira a largura total da casa (em metros): ");
    lidos = scanf("%f", &l_casa);
    if (lidos != 1) {
        printf("Houve erro ao ler a largura da casa\n");
        return 1;
    }

    //Calculos do terreno livre
    livre = (c_terreno * l_terreno) - (c_casa * l_casa);
    livre_percent = (livre / (c_terreno * l_terreno)) * 100;
    
    //Saida de dados
    printf("O terreno tem %.1fm livres, o que nos da %.2f%%\n", livre, livre_percent);
  
    return 0;
}
