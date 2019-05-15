#include<stdio.h>
int fatorial (int n); //protótipo
int combinacoes (int n, int p); //protótipo
int main() {
  int n, p, c;
  printf("digite n e p: ");
  scanf("%d%d", &n, &p);
  printf("Combinacoes de %d elems. %d a %d = %d\n", n, p, p, combinacoes (n, p));
  return 0;
}

int fatorial(int n) {
  int i, fat = 0;
  if (n >= 0){
    fat = 1;
    for(i = n; i >= 1 ; i--)
      fat = fat * i;
  }
  return fat;
}

int combinacoes(int n, int p) {
  return fatorial(n) / (fatorial(p) * fatorial(n-p));
}
