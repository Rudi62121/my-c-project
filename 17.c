#include <stdio.h>

void load_mem() {
    printf("MEM OK");
}

void load_cpu() {
    printf("CPU OK");
}

int main() {
    printf("BOOT: ");
    load_mem();
    printf(" ");
    load_cpu();
    printf(":END\n");
    return 0;
}
