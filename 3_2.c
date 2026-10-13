//#NoAlisaAI

#include <stdio.h>
#include <string.h>

int main(void) {
    char word1[15], word2[15];
    printf("Type 2 words: ");
    scanf("%14s %14s", word1, word2);

    printf("%s-%s\n", word1, word2);

    size_t plusik = strlen(word1) + strlen(word2);
    printf("TOTAL_LEN: %zu\n", plusik);

    return 0;
}