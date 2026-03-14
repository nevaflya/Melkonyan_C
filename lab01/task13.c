#include <stdio.h>

int main() {
    int total;
    printf("Введите секунды с начала суток: ");
    scanf("%d", &total);

    int h = total / 3600;
    int m = (total % 3600) / 60;
    int s = total % 60;

    printf("Время: %02d:%02d:%02d\n", h, m, s);
    return 0;
}