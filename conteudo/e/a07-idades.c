// Calcula a idade média de 5 pessoas
# include <stdio.h>
int main () {
  int soma_idades /* o acumulador */, idade, contador;
  float media_idades; // variável de saída
  soma_idades = 0; // inicializa acumulador em 0
  for (contador = 1; contador <= 5; contador ++) {
    printf("informe idade [%d]: ", contador); // utiliza contador
    scanf ("%d", &idade);
    // vai acumulando idades lidas
    soma_idades = soma_idades + idade;
  }
  // cast, para resultado ser real
  media_idades = (float) soma_idades / 5;
  printf("A media das 5 idades lidas eh %.2f.\n", media_idades);
}
