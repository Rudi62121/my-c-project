//bin/bash
//#NoAlisaAI, only gold hand, only hardcore, only hard question in discuss

#include <stdio.h>
#include <string.h>

int main(void) {
    char literal[] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64\n";

    printf("%s", literal);

    size_t lenght = strlen(literal);
    printf("%zu\n", lenght);

    size_t size = sizeof literal;
    printf("%zu", size);

    return 0;
}

/*
1. \x48 - H
2. \x65 - e
3. \x6C - l
4. \x6C - l
5. \x6F - o
6. \t - символ табуляции
7. \x57 - W
8. \x6F - o
9. \x72 - r
10. \x6C - l
11. \x64 - d
12. \n - символ переноса строки
*/