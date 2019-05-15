// Recebida uma nota, fornecer uma das seguintes mensagens:
//0 a 6: Reprovado; 7 a 9: Aprovado; 10: Aprovado com louvor.
#include <stdio.h>
int main () {
  int nota;
  printf("Nota (0 a 10): ");
  scanf("%d", &nota);
  if (nota < 0 || nota > 10)
    printf("Nota inválida!\n");
  else
    switch (nota) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      printf("Reprovado\n");
      break;
    case 6:
    case 7:
    case 8:
    case 9:
      printf("Aprovado\n");
      break;
    case 10:
      printf("Aprovado com louvor\n");
    }
  return 0;
}
