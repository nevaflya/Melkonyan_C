#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    printf("Простые числа от 1 до %d:\n", n);

    for (int i = 2; i <= n; i++) {
        int prime = 1;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }

        if (prime)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}