#include <stdio.h>

int main(void) {
    char str[100];
    int width;

    if (scanf("%99s %d", str, &width) != 2) {   
    //СПЕЦИФИКАТОР ограничивает ввод во избежание переполнения буфера
        return 1;
    }

    printf("%*s\n", width, str);
    printf("%-*s\n", width + 5, str);

    return 0;
}
