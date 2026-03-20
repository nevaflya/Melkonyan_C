#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);    


    int N;
    int sum = 0;
    
    printf("Введите число N: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) {  
            sum += i;
        }
    }
    
    printf("Сумма всех нечётных чисел от 1 до %d = %d\n", N, sum);
    
    return 0;
}