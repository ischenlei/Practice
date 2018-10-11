#include <stdio.h>

int main()
{
    int i, j, n, m;
    int fmark[100], ans[100], student[100][100], mark[100] = {0};

    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++)     scanf("%d", &fmark[i]);
    for (i = 0; i < m; i++)     scanf("%d", &ans[i]);

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &student[i][j]);
            if (student[i][j] == ans[j])
                mark[i] += fmark[j];
        }
    }

    for (i = 0; i < n; i++)     printf("%d\n", mark[i]);

    return 0;
}
