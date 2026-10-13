#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    wchar_t mod1[50];
    wchar_t mod2[50];
    wchar_t mod3[50];

    if (wscanf(L"%49ls %49ls %49ls", mod1, mod2, mod3) != 3) {
        return 1;
    }

    //%.5ls  жесткое ограничение точности (вывод только первых 5 символов)
    wprintf(L"%-15ls|%20ls|%.5ls\n", mod1, mod2, mod3);

    return 0;
}
