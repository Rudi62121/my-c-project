#include <stdio.h>

void pulse() {
    printf("@");
}

int main() {
    // Первая строка
    pulse();
    printf("\n");

    // Вторая строка
    pulse();
    pulse();
    printf("\n");

    // Третья строка
    pulse();
    pulse();
    pulse();
    printf("\n");

    return 0;
}
