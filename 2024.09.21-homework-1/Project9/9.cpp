#include <iostream>

int main(int argc, char* argv[]) {
    int h = 0;
    int a = 0;
    int b = 0;
    scanf_s("%d", &h);
    scanf_s("%d", &a);
    scanf_s("%d", &b);

    int e = 1 + ((h - a) > 0) * ((h - a + (a - b - 1)) / (a - b));
    printf("%d\n", e);

    return EXIT_SUCCESS;
}