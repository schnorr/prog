#include <stdio.h>

int main() {
    
    //declaração de variaveis  
    //Variáveis de entrada
    float distancia, gasosa;
    //Variável de saída
    float cons_medio;
    //Variável auxiliar
    int lidos;
    
    //entrada de dados
    printf("Insira a distancia percorrida pelo veiculo: ");
    lidos = scanf("%f", &distancia);
    if (lidos != 1) {
        printf("Houve erro ao ler a distância\n");
        return 1;
    }

    printf("Insira a quantia de gasosa consumida nesse trajeto: ");
    lidos = scanf("%f", &gasosa);
    if (lidos != 1) {
        printf("Houve erro ao ler a gasosa consumida\n");
        return 1;
    }
    
    //calcula o consumo medio
    cons_medio = distancia / gasosa;

    //Saida de dados
    printf("O consumo medio desse veiculo foi %.1fkm/L\n", cons_medio);
  
    return 0;
}