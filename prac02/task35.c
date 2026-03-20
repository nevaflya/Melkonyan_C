#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (i * j > 30) continue;
            printf("%d*%d=%-4d", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}