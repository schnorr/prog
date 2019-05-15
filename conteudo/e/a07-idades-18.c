/* Calcula a idade média de 5 pessoas e conta menores de idade do grupo: */
# include <stdio.h>
int main () {
  int soma_idades, idade, contador, conta_menos_de_18;
  float media_idades;
  soma_idades = 0;       // inicializa acumulador em 0
  conta_menos_de_18 = 0; // inicializa contador em 0
  for (contador = 1; contador <= 5; contador ++) {
    printf("informe idade [%d]: ", contador);
    scanf ("%d", &idade);
    if (idade < 18)
      conta_menos_de_18++; // incrementa 1 no contador
    // vai acumulando idades lidas
    soma_idades = soma_idades + idade;
  }
  // cast, para resultado ser real
  media_idades = (float) soma_idades/5;
  printf("A media das 5 idades lidas eh %.2f.\n", media_idades);
  printf("Existem %d pessoas menores de 18 anos.\n", conta_menos_de_18);
}
