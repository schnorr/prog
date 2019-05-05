#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZEPAL 15
int main() {
  char p1[SIZEPAL+1], p2[SIZEPAL+1], c1, c2;
  int flag, t1, t2, t, i;

  fgets(p1, SIZEPAL, stdin);
  t1 = strlen(p1);
  if (p1[t1-1] == '\n'){
    p1[t1-1] = '\0';
    t1 = strlen(p1);
  }

  fgets(p2, SIZEPAL, stdin);
  t2 = strlen(p2);
  if (p2[t2-1] == '\n'){
    p2[t2-1] = '\0';
    t2 = strlen(p2);
  }

  flag = 0;
  if (t2 != t1){
    flag = 1;
  }else{
    t = t2;
    for (i = 0; i < (t-1); i++){
      c1 = tolower(p1[i+1]);
      c2 = tolower(p2[i]);
	if(c2 != c1){
	  flag = 1;
	}
    }
    c1 = tolower(p1[0]);
    c2 = tolower(p2[t-1]);
    if (c2 != c1){
      flag = 1;
    }
  }
  if (flag == 0){
    printf("[%s] _é_ permuta de [%s]\n", p2, p1);
  }else{
    printf("[%s] não é permuta de [%s]\n", p2, p1);
  }
  return 0;
}
