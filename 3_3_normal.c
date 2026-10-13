//bin/bash
//#NoAlisaAI, only gold hand, only hardcore, only hard question in discuss

#include <stdio.h>
#include <string.h>

int main(void) {
    char username[50];
    printf("Enter the username: ");
    scanf("%s", username);

    size_t lenght = strlen(username);

    //1
    printf("\"%s\"\n", username);

    //2
    printf("\"%20s\"\n", username);

    //3
    printf("\"%-20s\"\n", username);    //выравнивание по левому краю в поле шир 20 сим

    //4
    printf("\"%*s       \"\n", lenght+5, username);     //Пробелы чтобы с выводом в ТЗ совпадало

    return 0;
}