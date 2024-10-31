#include <stdio.h>

#define PI 3.14 //Se quiser aumentar aq a precisão de pi

int main() {
    
    //Variáveis de entrada
    float raio;
    //Variávelde saída
    float area;
    //Variável auxiliar
    int lidos;

    //entrada de dados
    printf("Insira o valor do raiod o circulo: ");
    lidos = scanf("%f", &raio);
    if (lidos != 1) {
        printf("Houve um erro ao ler o raio!\n");
        return 1;
    }

    //cálculo da area
    area = raio * raio * PI;

    //Saída de dados
    printf("A area do circulo de raio %.2f eh %.2f\n", raio, area);
  
    return 0;
}