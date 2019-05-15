/* Um programa de computador para averiguar se uma equação é de segundo grau */
#include<stdio.h>
#include<math.h>
int main() {
  float a, b, c;      //variáveis de entrada
  float delta, r1, r2; //variáveis auxiliares
  printf("Entre com os valores a, b, c, separados por espaço:\n");
  scanf("%f%f%f", &a, &b, &c);
  printf("Dados reconhecidos: a = [%f] b = [%f] c = [%f]\n", a, b, c);
  printf("Vamos analisar a equação: %f * x^2 + %f * x + %f = 0\n", a, b, c);
  if(a == 0){
    printf("Resposta: Não é uma equação do segundo grau.\n");
  }else{
    delta = pow(b, 2) - 4 * a * c;
    if (delta < 0){
      printf("Resposta: raízes imaginárias %f (%f).\n", pow(b, 2), delta);
    }else{
      r1 = (-b + sqrt(delta)) / 2 * a;
      r2 = (-b - sqrt(delta)) / 2 * a;
      printf("Os resultados possíveis são: x = [%f] ou x = [%f]\n", r1, r2);
    }
  }
  return 0;
}
