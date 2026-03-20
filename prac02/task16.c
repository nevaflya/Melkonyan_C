#include <stdio.h>

int main() {
    int N, count = 0;

    while (1) {  
        scanf("%d", &N);
        if (N == 0) break;  
        count += 1;
    }

    printf("Количество чисел: %d\n", count);
    return 0;
}
