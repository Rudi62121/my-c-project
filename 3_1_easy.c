//bin/bash
//#NoAlisaAI, only gold hand, only hardcore, only hard question in discuss

#include <stdio.h>
#include <string.h>

int main(void) {
    //char massiv[20] = {"SibSUTIS"};       //8 символов
    char massiv[20] = {"СибГУТИ"};          //7 символов

    for (short i = 0; i < 20; i++) {
        printf("\"%c\" ", massiv[i]);
    }

    printf("\n\n");

    size_t size = sizeof massiv;
    printf("SIZEOF:  %zu\n", size);

    size_t lenght = strlen(massiv);
    printf("STRLEN:  %zu\n", lenght);

    size_t free_bytes = size - lenght - 1;
    printf("FREE_BYTES:  %zu\n", free_bytes);

    return 0;
}