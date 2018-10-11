#include <stdio.h>

int main()
{
    int n, i, j, va[100][4];

    scanf("%d", &n);

    int vx = 0, vy = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &va[i][j]);
        }
        if (va[i][0] + va[i][2] == va[i][1] && va[i][0] + va[i][2] == va[i][3])
            continue;
        if (va[i][0] + va[i][2] == va[i][1])
            vy++;
        if (va[i][0] + va[i][2] == va[i][3])
            vx++;
    }

    printf("%d %d", vx, vy);

    return 0;
}
