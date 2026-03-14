#include <stdio.h>
#include <stdlib.h>  

int main() {
    int n;
    printf("Введите число: ");
    scanf("%d", &n);

    printf("Последняя цифра: %d\n", abs(n) % 10);
    return 0;
}