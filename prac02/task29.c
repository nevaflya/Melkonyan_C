#include <stdio.h>

int main() {
    int n, num, max = -1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 5 == 0 && num > max)
            max = num;
    }

    if (max == -1)
        printf("Таких чисел нет\n");
    else
        printf("Наибольшее делящееся на 5: %d\n", max);

    return 0;
}