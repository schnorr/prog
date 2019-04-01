#include <stdio.h>
int main()
{
  int codigo;
  int resultado = 20;
  printf("Entre com o código: ");
  scanf("%d", &codigo);
  switch (codigo) {
  case 1: resultado = resultado + 5;
    break;
  case 2:
  case 4:
  case 7: break; // 2, 4 e 7: não faz nada, apenas evita entrar no default
  case 3:
  case 5: resultado = resultado - 2;
    break;
  case 6: resultado = 2 * (resultado + 1);
    break;
  case 8:
  case 9:
  case 10: resultado = 0;
    break;
  case 11: resultado = 123;
    break;
  default: printf("Codigo informado invalido!\n"); // não precisa break
  }
  printf("O valor de resultado é %d.\n", resultado);
  return 0;
}
