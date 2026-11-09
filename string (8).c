#include <stdio.h>

int main(void) {
    char palavra[] = "CASA";

    for (int i = 0; palavra[i] != '\0'; i++) {
        printf("%c\n", palavra[i]);
    }

    return 0;
}