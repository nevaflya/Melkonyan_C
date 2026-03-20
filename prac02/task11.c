#include <stdio.h>

int main() {
    int N, count = 0;
    
    printf("Введите количество чисел: ");
    scanf("%d", &N);
    
    printf("Введите %d чисел:\n", N);
    
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        
        if (num > 0) {
            count++;
        }
    }
    
    printf("Количество положительных чисел: %d\n", count);
    
    return 0;
}