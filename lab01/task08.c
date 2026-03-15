#include <stdio.h>

int main() {
    int x = 2147483647;

    printf("До:    %d\n", x);
    printf("После: %d\n", x + 1); 

    printf("В двоичном INT_MAX: 0 11111...1 (31 единица)\n");
    printf("После +1:           1 00000...0 = INT_MIN\n");

    return 0;
}