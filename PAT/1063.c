#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, N, n[10000][2];
    double m[10000];

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &n[i][j]);
        }
        m[i] = sqrt(pow(n[i][0], 2) + pow(n[i][1], 2));
    }

    double max = m[0];
    for (i = 0; i < N; i++) {
        if (max < m[i])
            max = m[i];
    }

    max = round(max * 100);

    printf("%.2f", max / 100);

    return 0;
}
