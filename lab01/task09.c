#include <stdio.h>

int main() {
    int x;
    printf("Введите x: ");
    scanf("%d", &x);

    int a1 = x*x + 2*x + 1;
    int b2 = (x+1)*(x+1) - (x-1)*(x-1);

    printf("x^2 + 2x + 1 = %d\n", a1);
    printf("(x+1)^2 - (x-1)^2 = %d\n", b2);
    printf("Оба должны совпадать: %s\n", a1 == b2 ? "Да" : "Нет");

    return 0;
}