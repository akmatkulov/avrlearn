#include <stdio.h>

int main(void) {
    int rows = 5; // A,B,C,D,E = 5 рядов

    for (int i = 0; i < rows; i++) {
        // 1. Пробелы
        for (int s = 0; s < rows - 1 - i; s++)
            printf(" ");

        // 2. Вверх A... 
        for (int j = 0; j <= i; j++)
            printf("%c", 'A' + j);

        // 3. Вниз ...A
        for (int k = i - 1; k >= 0; k--)
            printf("%c", 'A' + k);

        printf("\n");
    }
    return 0;
}
