#include <stdio.h>

int main() {
    
    //declaração de variaveis
    //Variáveis de entrada  
    float distancia, gasosa, preco;
    //Variável de saída
    float preco_medio;
    //Variável auxiliar
    int lidos;
    
    //entrada de dados
    printf("Insira a distancia percorrida pelo veiculo: ");
    lidos = scanf("%f", &distancia);
    if (lidos != 1) {
        printf("Houve erro ao ler a distancia\n");
        return 1;
    }

    printf("Insira a quantia de gasosa consumida nesse trajeto: ");
    lidos = scanf("%f", &gasosa);
    if (lidos != 1) {
        printf("Houve erro ao ler a gaspsa\n");
        return 1;
    }

    printf("Insira o valor do litro desse combustivel: ");
    lidos = scanf("%f", &preco);
    if (lidos != 1) {
        printf("Houve erro ao ler o preco\n");
        return 1;
    }
    
    //calcula o consumo medio
    preco_medio = gasosa * preco / distancia;

    //Saida de dados
    printf("O preco medio desse veiculo foi %.1fR$/km\n", preco_medio);
  
    return 0;
}
