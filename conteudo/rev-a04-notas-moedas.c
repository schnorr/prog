// Calcula menor número de notas e moedas correspondentes a um valor:
#include<stdio.h>
#include<math.h> // função round
int main()
{
  float valor;
  int pint, pdecimal;
  int n100, n50, n20, n10, n5, n2, n1; // contadores de notas
  int m50, m25, m10, m05, m01; // contadores de moedas

  printf(" *** Conversoes de valores ***\n");
  printf("Informe o valor a ser convertido: R$");
  scanf("%f",&valor);
  pint = (int) valor;
  pdecimal = (int) (round((valor-pint)*100));

  n100 = pint/100; // resultado da divisão inteira por 100
  pint = pint % 100; // resto da divisão inteira por 100
  n50 = pint / 50;
  pint = pint%50;
  n20 = pint/20;
  pint = pint%20;
  n10 = pint/10;
  pint = pint%10;
  n5 = pint/5;
  pint = pint % 5;
  n2 = pint/2; // resultado da divisão inteira por 2
  n1 = pint%2; // resto da divisão inteira por 2

  printf("\n\nValor lido: R$%d,00\n",valor); // insere vírgula zero
  printf("notas de 100: %d\n",n100);
  printf("notas de 50: %d\n",n50);
  printf("notas de 20: %d\n",n20);
  printf("notas de 10: %d\n",n10);
  printf("notas de 5: %d\n",n5);
  printf("notas de 2: %d\n",n2);
  printf("notas de 1: %d\n",n1);

  m50 = pdecimal/50;        // resultado da divisão inteira por 50
  pdecimal = pdecimal % 50; // resto da divisão inteira por 50
  m25 = pdecimal / 25;
  pdecimal = pdecimal% 25;
  m10 = pdecimal/10;
  pdecimal = pdecimal%10;
  m05 = pdecimal/5;
  m01 = pdecimal%5;

  printf(" Moedas de 50: %d\n",m50);
  printf(" Moedas de 25: %d\n",m25);
  printf(" Moedas de 10: %d\n",m10);
  printf(" Moedas de 5: %d\n",m05);
  printf(" Moedas de 1: %d\n",m01);
  return 0
}
