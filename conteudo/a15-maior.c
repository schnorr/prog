/*calcula media de uma turma. Entradas: notas de 30 alunos.  Saida: media da turma */
#include <stdio.h>
int main () {
  // Nota dos 30 alunos
  float n01, n02, n03, n04, n05, n06, n07, n08, n09, n10;
  float n11, n12, n13, n14, n15, n16, n17, n18, n19, n20;
  float n21, n22, n23, n24, n25, n26, n27, n28, n29, n30;
  // Obtém a nota de cada aluno
  scanf ("%f %f %f %f %f %f %f %f %f %f"
	 "%f %f %f %f %f %f %f %f %f %f"
	 "%f %f %f %f %f %f %f %f %f %f",
	 &n01, &n02, &n03, &n04, &n05, &n06, &n07, &n08, &n09, &n10,
	 &n11, &n12, &n13, &n14, &n15, &n16, &n17, &n18, &n19, &n20,
	 &n21, &n22, &n23, &n24, &n25, &n26, &n27, &n28, &n29, &n30);
  float media, soma;
  soma = n01 + n02 + n03 + n04 + n05 + n06 + n07 + n08 + n09 + n10 +
    n11 + n12 + n13 + n14 + n15 + n16 + n17 + n18 + n19 + n20 +
    n21 + n22 + n23 + n24 + n25 + n26 + n27 + n28 + n29 + n30;
  media = soma / 30;
  printf("Media da turma: %2.2f\n", media);
  if (n01 > media) printf("%f\n", n01);
  if (n02 > media) printf("%f\n", n02);
  if (n03 > media) printf("%f\n", n03);
  if (n04 > media) printf("%f\n", n04);
  if (n05 > media) printf("%f\n", n05);
  if (n06 > media) printf("%f\n", n06);
  if (n07 > media) printf("%f\n", n07);
  if (n08 > media) printf("%f\n", n08);
  if (n09 > media) printf("%f\n", n09);
  if (n10 > media) printf("%f\n", n10);
  if (n11 > media) printf("%f\n", n11);
  if (n12 > media) printf("%f\n", n12);
  if (n13 > media) printf("%f\n", n13);
  if (n14 > media) printf("%f\n", n14);
  if (n15 > media) printf("%f\n", n15);
  if (n16 > media) printf("%f\n", n16);
  if (n17 > media) printf("%f\n", n17);
  if (n18 > media) printf("%f\n", n18);
  if (n19 > media) printf("%f\n", n19);
  if (n20 > media) printf("%f\n", n20);
  if (n21 > media) printf("%f\n", n21);
  if (n22 > media) printf("%f\n", n22);
  if (n23 > media) printf("%f\n", n23);
  if (n24 > media) printf("%f\n", n24);
  if (n25 > media) printf("%f\n", n25);
  if (n26 > media) printf("%f\n", n26);
  if (n27 > media) printf("%f\n", n27);
  if (n28 > media) printf("%f\n", n28);
  if (n29 > media) printf("%f\n", n29);
  if (n30 > media) printf("%f\n", n30);
  return 0;
}
