// Gera permutação circular
#include <stdio.h>
#include <string.h>
#define SIZEPAL 16
int main() {
  //a palavra lida
  char palavra[SIZEPAL+1];
  //a palavra permutada
  char permuta[SIZEPAL+1];
  //para salvar tamanho
  int tamanho;
  //índice de percorrimento na string
  int i;

  //Vamos ler a palavra
  printf("Palavra: ");
  fgets(palavra, SIZEPAL, stdin);
  tamanho = strlen(palavra);
  //remove o \n
  palavra[tamanho-1] = '\0';

  //atualiza tamanho
  tamanho = strlen(palavra);

  printf("\n\nPalavra: [%s]\n",palavra);

  // do 1 até penúltimo caractere
  // recebem o da posição posterior
  for (i = 0; i < (tamanho-1); i++){
    permuta[i] = palavra[i+1];
  }
  // último caractere da permuta
  // recebe primeiro da palavra
  permuta[i] = palavra[0];
  // inserir terminador
  permuta[i+1] = '\0';

  printf("Permuta: [%s]\n",permuta);
  return 0;
}
