// Calcula a idade média de NUMPESSOAS pessoas
#include <stdio.h>
#define NUMPESSOAS 5
int main () {
  int soma_idades, idade, contador;
  float media_idades;
  soma_idades = 0; // inicializa acumulador em 0
  for (contador = 1; contador <= NUMPESSOAS; contador ++) {
    printf("informe idade [%d]: ", contador); // utiliza contador
    scanf ("%d", &idade);
    // vai acumulando idades lidas
    soma_idades = soma_idades + idade;
  }
  // cast, para resultado ser real
  media_idades = (float) soma_idades / NUMPESSOAS;
  printf("A media das %d idades lidas eh %.2f.\n", NUMPESSOAS, media_idades);
}
