#include <stdio.h>

int main() {
    int a = 5;

    printf("a = %d\n", a);
    printf("a++ = %d  (a стал %d)\n", a++, a);  
    printf("++a = %d  (a стало %d)\n", ++a, a);
    printf("a-- = %d  (a стал %d)\n", a--, a);  
    printf("--a = %d  (a стало %d)\n", --a, a);

    return 0;
}