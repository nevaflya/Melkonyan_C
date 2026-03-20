#include <stdio.h>

int main() {
    int n, is_prime = 1;
    scanf("%d", &n);

    if (n < 2) is_prime = 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }

    if (is_prime)
        printf("%d — простое число\n", n);
    else
        printf("%d — составное число\n", n);

    return 0;
}