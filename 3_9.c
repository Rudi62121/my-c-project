#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    wchar_t nickname[50];

    wprintf(L"Введите позывной: ");

    if (wscanf(L"%49ls", nickname) != 1) {
        return 1;
    }

    wprintf(L"Агент %ls авторизован в системе\n", nickname);

    return 0;
}
