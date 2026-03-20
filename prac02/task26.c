#include <stdio.h>

int digit_sum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (digit_sum(i) > 10)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}