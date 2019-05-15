#include <stdio.h>
int main()
{
  int val1;
  scanf("%d", &val1);
  if (val1 < 10)
    val1++;
  printf("O valor final é %d.\n", val1);
  return 0;
}
