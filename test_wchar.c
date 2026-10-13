#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    // Устанавливаем системную локаль (UTF-8)
    setlocale(LC_ALL, "");

    // Буквенный префикс L указывает на широкие символы
    wchar_t massiv[20] = L"СибГУТИ"; 

    // Посимвольный вывод (используем %lc для wchar_t)
    for (short i = 0; i < 20; i++) {
        if (massiv[i] == L'\0') {
            printf("'\\0' ");
        } else {
            printf("\"%lc\" ", massiv[i]);
        }
    }

    printf("\n\n");

    // sizeof вернет общий размер в байтах (на Linux wchar_t обычно 4 байта)
    size_t size_bytes = sizeof massiv;
    printf("SIZEOF (байты):  %zu\n", size_bytes);

    // wcslen считает именно количество широких символов (букв)
    size_t length = wcslen(massiv);
    printf("WCSLEN (символы):  %zu\n", length);

    // Свободные ячейки для символов
    size_t free_chars = (sizeof(massiv) / sizeof(massiv[0])) - length - 1;
    printf("FREE_CHARS:  %zu\n", free_chars);

    return 0;
}
