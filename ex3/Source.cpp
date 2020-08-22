#include <stdio.h>

int main(void)
{
    int x, y;
    int i, j;

    printf("Input X Y\n>");
    scanf_s("%d %d", &x, &y);

    for (i = 0; i < y; i++) {
        for (j = 0; j < x; j++) {
            printf("–");
        }
        printf("\n");
    }
    return 0;
}