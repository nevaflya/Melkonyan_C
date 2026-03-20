#include <stdio.h>

int main() {

    int N, count = 0;
    
    printf("Введите количество чисел: ");
    scanf("%d", &N);
    
    printf("Введите %d чисел:\n", N);
    
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        
        if (num > 10) {
            count++;
        }
    }
    
    printf("Числа больше 10: %d\n", count);
    
    return 0;
}