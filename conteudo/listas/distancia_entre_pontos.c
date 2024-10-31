#include <stdio.h>
#include <math.h>

int main() {
    
    //declaração de variaveis
    //Variáveis de entrada
    float x1, x2, y1, y2; 
    //Variável de saída
    float distancia;
    //Variável auxiliar
    int lidos;

    //entrada de dados
    printf("Insira as coordenadas x e y do P1: ");
    lidos = scanf("%f %f", &x1, &y1);
    if (lidos != 2) {
        printf("Houve erro ao ler P1\n");
        return 1;
    }
    
    printf("Insira as coordenadas x e y do P2: ");
    lidos = scanf("%f %f", &x2, &y2);
    if (lidos != 2) {
        printf("Houve erro ao ler P2\n");
        return 1;
    }

    //calcula a distancia
    distancia = sqrt(pow(x1 - x2, 2) + pow(x1 - x2, 2));

    //Saida de dados
    printf("A distancia de P1 de P2 eh %.1f\n", distancia);
  
    return 0;
}