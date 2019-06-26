#include <stdio.h>

typedef struct {
  int codigo;
  char nome[32];
  float preco;
} eletro_t;

void limpa_buffer() {
  char c;
  while ((c = getchar()) != '\n' && c != EOF);
}

void esc_bin(FILE *fp) {
    eletro_t eletro = {0};
    int enquanto_quiser_ler = 1;
    char escolha;
    do {
      printf("Codigo: ");
      scanf("%d", &eletro.codigo); //ler codigo em &eletro.codigo
      limpa_buffer();
      printf("Nome: ");
      fgets(eletro.nome, 32, stdin); //ler nome de no máximo 31 bytes em eletro.nome
      printf("Preco: ");
      scanf("%f", &eletro.preco); //ler preço em &eletro.preco
      fwrite(&eletro, sizeof(eletro_t), 1, fp);
      printf("Continuar? (s ou n): ");
      scanf(" %c", &escolha);
      if(escolha == 'n') {
         enquanto_quiser_ler = 0;
      }
    } while(enquanto_quiser_ler);
}

void esc_texto(FILE *fp, char nome[], float preco) {
  fprintf(fp, "%s %f\n", nome, preco);
}

int main() {
  FILE *fp = fopen("eletro.bin", "r+");
  if(fp == NULL){
    printf("Erro fatal.\n");
    return 0;
  }
  esc_bin(fp);
  fseek(fp, 0L, SEEK_SET); // como um rewind(fp)
  FILE *caro = fopen("caro.txt", "w");
  FILE *barato = fopen("barato.txt", "w");
  eletro_t eletro;
  int elementos_lidos;
  do {
    elementos_lidos = fread(&eletro, sizeof(eletro_t), 1, fp);
    if (elementos_lidos == 1){
      if(eletro.preco > 500) {
	   esc_texto(caro, eletro.nome, eletro.preco);
      }else{
	   esc_texto(barato, eletro.nome, eletro.preco);
	}
    }
  }while(elementos_lidos == 1);
  fclose(caro);
  fclose(barato);
  fclose(fp);
}
