#include <stdio.h>
int main ()
{
int x, i, j;
x = 8;
for (i = 2; i < 5; i++)
{
j= 3;
while (j > 0)
{
x = x+1;
j = j-1;
}
printf( "X : %5d\n", x );
}
printf("- Fim - \n");
return 0;
}
