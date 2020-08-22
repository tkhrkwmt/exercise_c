#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 1; i <= 10; i++) {
        for (j = 0; j < i; j++) {
            printf("%-2d ", i + j);
        }
        printf("\n");
    }
    return 0;
}