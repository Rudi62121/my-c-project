#include <stdio.h>

int main(void) {
    char ch;

    if (scanf("%c", &ch) != 1) {
        return 1;
    }

    printf("CODE DEC: %d\n", ch);
    printf("CODE HEX: %x\n", ch);
    printf("CODE OCT: %o\n", ch);

    char upper_ch = ch - 32;
    printf("UPPER: %c\n", upper_ch);

    char next_ch = ch + 1;
    printf("NEXT: %c\n", next_ch);

    char prev_ch = ch - 1;
    printf("PREV: %c\n", prev_ch);

    return 0;
}
