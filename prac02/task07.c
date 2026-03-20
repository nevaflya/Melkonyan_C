#include <stdio.h>

int main() {
    int N;
    
    printf("Введите число N: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        int square = i * i;
        if (square > 50) {
            printf("%d^2 = %d\n", i, square);
        }
    }
    
    return 0;
}