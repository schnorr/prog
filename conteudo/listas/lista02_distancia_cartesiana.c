#include <stdio.h>
#include <math.h>

int main() {
    
    //Variáveis de entrada
    float x1, x2, y1, y2, z1, z2, distxy, distxz, distyz, area;
    //Variáveis auxiliares
    int lidos;

    //Entrada de dados 
    printf("Entre com as coordenadas do ponto 1: ");
    lidos = scanf("%f %f", &x1, &x2);
    if (lidos != 2) {
        printf("Houve um erro na leitura!\n");
        return 1;
    }
    printf("Entre com as coordenadas do ponto 2: ");
    lidos = scanf("%f %f", &y1, &y2);
    if (lidos != 2) {
        printf("Houve um erro na leitura!\n");
        return 1;
    }
    printf("Entre com as coordenadas do ponto 3: ");
    lidos = scanf("%f %f", &z1, &z2);
    if (lidos != 2) {
        printf("Houve um erro na leitura!\n");
        return 1;
    }
   

    //Processamento de dados
    distxy = sqrt(pow(x1 - y1, 2) + pow(x2 - y2, 2));
    distxz = sqrt(pow(x1 - z1, 2) + pow(x2 - z2, 2));
    distyz = sqrt(pow(z1 - y1, 2) + pow(z2 - y2, 2));

    //Saída de dados
    printf("dist(p1, p2) = %.2f\ndist(p1, p3) = %.2f\ndist(p2, p3) = %.2f\n", distxy, distxz, distyz);

    if (fabs(distxy - distxz) < distyz && distyz < distxy + distxz &&
        fabs(distxz - distyz) < distxy && distxy < distxz + distyz &&
        fabs(distxy - distyz) < distxz && distxz < distxy + distyz) {

            /*
            Se formar um triângulo, calcularemos a área usando a regra de que a área eh a metade do modulo do determinante da matriz
            |x1 x2 1 |
            |y1 y2 1 |
            |z1 z2 1 |
            */
            area = .5 * fabs(x1 * y2 + y1 * z2 + x2 * z1 - z1 * y2 - y1 * x2 - z2 * x1); 
            printf("Os segmentos formam um triângulo de área %.2f\n", area);

    } else {
        printf("Os segmentos de reta nao formam um triangulo!\n");
    }
    return 0;
}
