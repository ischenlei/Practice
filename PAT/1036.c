#include <stdio.h>

int main()
{
    char c;
    int L, l, i, j;

    scanf("%d %c", &L, &c);
    if (L % 2 != 0)
        l = L / 2 + 1;
    else
        l = L / 2;

    for (i = 1; i <= l; i++) {
        for (j = 1; j <= L; j++) {
            if (i == 1 || i == l)
                printf("%c", c);
            if (j == 1 && (i != 1 && i != l))
                printf("%c", c);
            if (i != 1 && i != l && j != 1 && j != L)
                printf(" ");
            if (j == L && (i != 1 && i != l))
                printf("%c", c);
        }
        putchar('\n');
    }

    return 0;
}
