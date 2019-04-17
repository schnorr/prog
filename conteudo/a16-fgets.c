#include <stdio.h>
int main(){
  char minha_string[5];
  fgets(minha_string, 5, stdin);
  printf("->[%s]<-\n", minha_string);
  fgets(minha_string, 5, stdin);
  printf("->[%s]<-\n", minha_string);
  return 0;
}

#include <stdio.h>
int main(){
  char str[5];
  fgets(str, 5, stdin);
  printf("->[%s]<-\n", str);
  return 0;
}
