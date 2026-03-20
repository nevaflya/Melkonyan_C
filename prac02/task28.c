#include <stdio.h>

int digit_3(int n) {
    while (n > 0) {
        if (n % 10 == 3)
            return 1;
        n /= 10;
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (has_digit_3(i))
            continue;
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}