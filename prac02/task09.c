#include <stdio.h>

int main() {
    int N;
    
    printf("Введите число N: ");
    scanf("%d", &N);
    
    printf("Числа от %d до 1 (пропуская кратные 4):\n", N);
    
    for (int i = N; i >= 1; i--) {
        if (i % 4 != 0) {  
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}