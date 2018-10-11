#include <stdio.h>

int main()
{
    int n, i, j, sum = 0, va[10], vb[50];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &va[i]);
    }

    int cont = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (va[i] != va[j]) {
                vb[cont] = va[i] * 10 + va[j];
                sum += vb[cont];
                cont++;
            }
        }
    }

    printf("%d", sum);
    return 0;
}
