#include <stdio.h>

int main() {
    int n;
    printf("Введите трёхзначное число: ");
    scanf("%d", &n);

    int sotni  = n / 100;
    int desjat = (n / 10) % 10;
    int edinic = n % 10;

    printf("Сотни:   %d\n", sotni);
    printf("Десятки: %d\n", desjat);
    printf("Единицы: %d\n", edinic);
    return 0;
}