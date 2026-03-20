#include <stdio.h>

int main() {
    int N;
    long long product = 1;
    int found = 0;         
    
    printf("Введите число N: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0) { 
            product *= i;
            found = 1;
        }
    }
    
    if (found) {
        printf("Произведение чисел от 1 до %d, которые делятся на 3 = %lld\n", N, product);
    } else {
        printf("Нет чисел от 1 до %d, которые делятся на 3\n", N);
    }
    
    return 0;
}