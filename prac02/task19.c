#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    printf("%-10s %-10s\n", "Число", "Квадрат");

    for (int i = 2; i <= n; i += 2) {
        printf("%-10d %-10d\n", i, i * i);
    }

    return 0;
}