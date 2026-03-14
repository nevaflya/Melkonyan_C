#include <stdio.h>

int main() {
    int a, b, c;

    printf("Адрес a: %p\n", (void*)&a);
    printf("Адрес b: %p\n", (void*)&b);
    printf("Адрес c: %p\n", (void*)&c);

    long diff_ab = (char*)&a - (char*)&b;
    long diff_bc = (char*)&b - (char*)&c;

    printf("\nРазница a-b: %ld байт\n", diff_ab);
    printf("Разница b-c: %ld байт\n", diff_bc);
    printf("sizeof(int): %zu байт\n", sizeof(int));

    return 0;
}