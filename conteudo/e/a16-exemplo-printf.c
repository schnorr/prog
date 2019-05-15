#include <stdio.h>
int main () {
  char str0[15] = "Ana";
  char str1[15] = {'A', 'n', 'a' };
  char str2[] = "Maria";
  char str3[3] = "Joao";
  printf("->[%s]<-->[%s]<-->[%s]<-->[%s]<-\n",
	 str0, str1, str2, str3);
  return 0;
}
