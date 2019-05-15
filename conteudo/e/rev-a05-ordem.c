/* Um programa de computador para averiguar se uma equação é de segundo grau */
#include<stdio.h>
#include<math.h>
int main() {
  float a, b, c;            //variáveis de entrada
  float menor, meio, maior; //variáveis de saída
  printf("Entre com os três valores separados por espaço:\n");
  scanf("%f%f%f", &a, &b, &c);
  printf("Dados reconhecidos: [%f] [%f] [%f]\n", a, b, c);

  //Descobre o menor
  if (a < b && a < c)
    menor = a;
  else if (b < a && b < c)
    menor = b;
  else
    menor = c;

  //Descobre o maior
  if (a > b && a > c)
    maior = a;
  else if (b > a && b > c)
    maior = b;
  else
    maior = c;

  //Descobre o miolo
  if (a != maior && a != menor) 
    meio = a;
  else if (b != maior && b != menor)
    meio = b;
  else
    meio = c;
  printf("Em ordem crescente: %f %f %f\n", menor, meio, maior);
  return 0;
}
