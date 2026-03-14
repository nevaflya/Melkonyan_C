#include <stdio.h>

int main() {
    float a = 0.1f;
    float b = 0.2f;

    printf("a + b = %.20f\n", a + b);
    double da = 0.1, db = 0.2;
    printf("double: %.20f\n", da + db);

    return 0;
}