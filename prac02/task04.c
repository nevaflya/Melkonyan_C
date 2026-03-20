#include <stdio.h>
#include <windows.h>

int a;

int main(void) {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    scanf("%d", &a);
    for (int i = 1; i<= a; i++) {
        if (i % 5 == 0)
        {
          printf("%d ", a);
        }
    }
    return 0;
}