#include <stdio.h>

int main(void)
{
    int x, y;
    int i, j;

    printf("Input X\n>");
    scanf_s("%d", &x);
    if ((x < 1) || (x > 5)) {
        printf("error X\n>");
        return -1;
    }

    printf("Input Y\n>");
    scanf_s("%d", &y);
    if ((y < 1) || (y > 5)) {
        printf("error Y\n>");
        return -2;
    }

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if ((i == y) && (j == x)) {
                printf("Z");
            }
            else {
                printf("–");
            }
            
        }
        printf("\n");
    }
    return 0;
}