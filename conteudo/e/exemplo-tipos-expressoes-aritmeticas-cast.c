/* Exemplo para ilustrar um problema com expressoes aritmeticas */
#include <stdio.h>
int main()
{
  float num_real_0, num_real_1, num_real_2, num_real_3;  // variaveis reais
  int x=1, y=2, z=1; // valores inteiros – inicializados na declaracao

  num_real_0 = x/2        + y/2        +        z/2;
  num_real_1 = (float)x/2 + y/2        +        z/2;
  num_real_2 = (float)x/2 + (float)y/2 +        z/2;
  num_real_3 = (float)x/2 + (float)y/2 + (float)z/2;

  printf("Resultados -> "
	 "C0: [%f] "
	 "C1: [%f] "
	 "C2: [%f] "
	 "C3: [%f]\n", num_real_0, num_real_1, num_real_2, num_real_3);
  return 0;
}
