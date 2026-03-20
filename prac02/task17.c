#include <stdio.h>

int main() {
    int n, sum = 0;

    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        if (n > 0) sum += n;
    }

    printf("Сумма положительных: %d\n", sum);
    return 0;
}