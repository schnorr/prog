#include <stdio.h>
#include <ctype.h>
int main()
{
  char letra_peq = 'a';
  char letra_gra = 'A';

  printf("pequena %c é %d\n"
	 "grande %c é %d\n",
	 letra_peq, letra_peq,
	 letra_gra, letra_gra);

  int dif = letra_peq - letra_gra;
  printf("dif = %d\n", dif);
  printf("%c %c\n", letra_peq - dif, letra_gra + dif);	 
  return 0;
}
