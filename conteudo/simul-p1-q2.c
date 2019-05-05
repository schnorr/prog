#include <stdio.h>
int main(){
  int vet[] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0,
	         1, 1, 1, 0, 0, 0, 0, 0, 1, 0,
               1, 0};
  int tam = 22;
  int i;
  int maior_tamanho = -1;
  int maior_comeco = -1;
  int comeco = 0;
  int tamanho = 1;
  int atual = vet[0];
  for (i = 1; i < tam; i++){
    if (vet[i] == atual){
      tamanho++;
      if (tamanho > maior_tamanho) {
	  maior_tamanho = tamanho;
    	  maior_comeco = comeco;
      }
    }else{
      comeco = i;
      tamanho = 1;
      atual = vet[i];
    }
//    printf("%d %d %d %d\n",
//           vet[i], atual, comeco, tamanho);
  }
  printf ("Posição %d\n", maior_comeco);
  printf ("Tamanho %d\n", maior_tamanho);
  printf ("Sequência ");
  for (i = maior_comeco;
       i < (maior_comeco+maior_tamanho); i++){
    printf("%d ", vet[i]);
  }
  printf ("\n");
  return 0;
}
