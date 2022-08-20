#include <stdio.h>
#define DIMMAX 20
int main() {
  int m[DIMMAX][DIMMAX];
  int nl, nc, i, j;
  FILE *fp = fopen("matriz.txt", "r");
  fscanf(fp, "%d", &nl);
  fscanf(fp, "%d", &nc);
  for (i = 0; i < nl; i++){
    for (j = 0; j < nc; j++){
      fscanf(fp, "%d", &m[i][j]);
    }
  }
  fclose(fp);

  fp = fopen("matriz.bin", "w");
  for (i = 0; i < nl; i++){
    fwrite(&m[i], sizeof(int), nc, fp);
  }
  fclose(fp);

  fp = fopen("matriz.bin", "r");
  int m2[DIMMAX][DIMMAX];
  fread(&m2, sizeof(int), nc*nl, fp);
  for (i = 0; i < nl; i++){
    fread(&m2[i], sizeof(int), nc, fp);
  }  
  fclose(fp);
  return 0;
}
