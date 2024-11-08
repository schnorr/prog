/*
1. Valores de Saída

X :    11
X :    14
X :    17
- Fim -
*/

// 2.
#include <stdio.h>
int main() {
    int x, i, j;
    x = 8;

    i = 2;
    while (i < 5) {
        j = 3;

        do {
            x = x + 1;
            j = j - 1;
        } while (j > 0);

        printf("X : %5d\n", x);
        i++;
    }

    printf("- Fim - \n");
    return 0;
}
