#include <stdio.h>
int minha_funcao(); //declaração da existência da função com seu protótipo (sem a implementação entre chaves)
int main() {
  minha_funcao();   //chamada da funcao minha_funcao(), implementada em outro arquivo
  return 0;
}
