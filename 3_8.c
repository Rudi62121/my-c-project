#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    const char str_utf8 = "Сбой матрицы";
    const wchar_t str_wchar = L"Сбой матрицы";

    printf("char -> sizeof: %zu bytes, strlen: %zu chars\n", sizeof("Сбой матрицы"), strlen(str_utf8));
    printf("wchar -> sizeof: %zu bytes, wcslen: %zu chars\n", sizeof(L"Сбой матрицы"), wcslen(str_wchar));

    return 0;
}
