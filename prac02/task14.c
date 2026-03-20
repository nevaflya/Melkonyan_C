#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    double num, maximum;
    
    printf("Введите количество чисел: ");
    scanf("%d", &n);
    
    printf("Введите число 1: ");
    scanf("%lf", &maximum);
    
    for (int i = 2; i <= n; i++) {
        printf("Введите число %d: ", i);
        scanf("%lf", &num);
        
        if (num > maximum) {
            maximum = num;
        }
    }
    
    printf("Максимальное число: %.2lf\n", maximum);
    
    return 0;
}