#include <stdio.h>

int main() {
    int reactor_core = 12;
    int double_val = reactor_core * 2;
    int quad_val = reactor_core * reactor_core;

    printf("[");
    printf("%d", reactor_core);
    printf(", ");
    printf("%d", double_val);
    printf(", ");
    printf("%d", quad_val);
    printf("]\n");

    return 0;
}
