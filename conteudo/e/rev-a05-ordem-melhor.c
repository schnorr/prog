#include <stdio.h>
int main()
{
  float v1, v2, v3;    //variáveis de entrada e saída
  printf("Entre com os três valores separados por espaço:\n");
  scanf("%f%f%f", &v1, &v2, &v3);
  printf("Dados reconhecidos: [%f] [%f] [%f]\n", v1, v2, v3);
  if ( v1 <= v2)
    if( v1 <= v3 )
      if(v2 <= v3)
	printf("%f, %f, %f\n", v1, v2, v3);
      else
	printf("%f, %f, %f\n", v1, v3, v2);
    else
      printf("%f, %f, %f\n", v3, v1, v2);
  else
    if(v2 <= v3)
      if(v1 <= v3)
	printf("%f, %f, %f\n", v2, v1, v3);
      else
	printf("%f, %f, %f\n", v2, v3, v1);
    else
      printf("%f, %f, %f\n", v3, v2, v1);
  return 0;
}
