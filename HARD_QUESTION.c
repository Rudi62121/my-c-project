//bin/bash
//#NoAlisaAI, only gold hand, only hardcore, only hard question in discuss

#include <stdio.h>
#include <string.h>

int main(void) {
    char word1[15], word2[15];
    scanf("Введи 2 слова: %s %s", word1, word2);

    printf("%s-%s\n", word1, word2);

    size_t plusik = strlen(word1) + strlen(word2);
    printf("TOTAL_LEN: %zu\n", plusik);

    return 0;
}

/*
Это та форма задания 3.2, которая поставила меня в тупик, хотя я знал как работает scanf()...
ПРОШУ, задайте вопрос "Почему данный код выполняется неверно?" всем, кто будет подходить после меня,
пока они не разгадают этот секрет.
*/