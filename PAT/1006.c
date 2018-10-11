#include <stdio.h>

int main()
{
    int i, j, k, num, va[3];

    scanf("%d", &num);

    for (i = 0; num > 0; i++) {
        va[i] = num % 10;
        num /= 10;
    }

    for (j = i-1; j >= 0; j--) {
        if (j == 2)
            for (k = 0; k < va[j]; k++)
                printf("B");
        if (j == 1)
            for (k = 0; k < va[j]; k++)
                printf("S");
        if (j == 0)
            for (k = 1; k <= va[j]; k++)
                printf("%d", k);
    }

    return 0;
}
