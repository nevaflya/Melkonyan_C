#include <stdio.h>

int main() {
    int a, b;
    printf("Введите два числа: ");
    scanf("%d %d", &a, &b);

    printf("Остаток от %d / %d = %d\n", a, b, a % b);

    return 0;
}