#include <stdio.h>

int main(void) {
    char palavra[] = "CASA";

    palavra[0] = 'M';
    printf("%s\n", palavra);

    return 0;
}