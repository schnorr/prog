#include <stdio.h>
#include <stdlib.h>
//Limites da nossa matriz
#define NL 10
#define NC 3

//Limites de valores aleatórios
#define MI -10
#define MA 10
int main(){
  //A matriz m e seus índices
  int m[NL][NC];
  int l, c;

  // Define a semente
  srand(0);

  // inicializar a matriz
  // com valores aleatórios
  for (l = 0; l < NL; l++){
    for (c = 0; c < NC; c++){
      m[l][c] = MI+
	(rand()%(MA-MI+1));
    }
  }

  //imprime a matriz
  for (l = 0; l < NL; l++){
    for (c = 0; c < NC; c++){
      printf("%2d", m[l][c]);
      if (c+1 < NC){
	printf(" ");
      }
    }
    printf("\n");
  }

  //#3.1 maior por coluna
  for (c = 0; c < NC; c++){
    int maior = m[0][c];
    for (l = 0; l < NL; l++){
      if (m[l][c] > maior)
	maior = m[l][c];
    }
    printf("#3.1 C. %d é %d.\n",
	   c, maior);
  }

  //#3.2 media por linha
  for (l = 0; l < NL; l++){
    int soma = 0;
    for (c = 0; c < NC; c++){
      soma += m[l][c];
    }
    printf("#3.2 M. %d é %.2f.\n",
	   l, (float)soma/NC);
  }

  //#3.3 produto de não zeros
  int produto = 1;
  for (l = 0; l < NL; l++){
    for (c = 0; c < NC; c++){
      if (m[l][c])
	produto *= m[l][c];
    }
  }
  printf("#3.3 P. %d\n", produto);

  //#3.4 quantos negativos
  int negativos = 0;
  for (l = 0; l < NL; l++){
    for (c = 0; c < NC; c++){
      if (m[l][c] < 0)
	negativos++;
    }
  }
  printf("#3.4 N. %d\n", negativos);

  //#3.5 Buscar valor
  int valor, achou, pl, pc;
  printf("Entre com valor -> ");
  scanf("%d", &valor);
  achou = 0;
  for (l = 0; l < NL; l++){
    for (c = 0; c < NC; c++){
      if (m[l][c] == valor){
	achou = 1;
	pl = l;
	pc = c;
      }
    }
  }
  if (achou){
    printf("#3.5 Achou@[%d][%d]\n",
      pl, pc);
  }else{
    printf("#3.5 Não achou.\n");
  }
  return 0;
}
