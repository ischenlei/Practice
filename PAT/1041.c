#include <stdio.h>

int main()
{
    int N, M, i, j, textnum[1000], examnum[1000], t[1000];
    char student[1000][20];

    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%s %d %d", student[i], &textnum[i], &examnum[i]);

    scanf("%d", &M);
    for (i = 0; i < M; i++) {
        scanf("%d", &t[i]);
    }

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++)
            if (t[i] == textnum[j]) {
                printf("%s %d", student[j], examnum[j]);
                if (i + 1 < M)
                    putchar('\n');
            }
    }

    return 0;
}
