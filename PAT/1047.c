#include <stdio.h>

int main()
{
    int n, i, team, member, mark, highest;
    int teams[10000] = {0};

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d-%d %d", &team, &member, &mark);
        teams[team - 1] += mark;
    }

    int max = teams[0];
    for (i = 0; i < 1000; i++)
        if (max < teams[i]) {
            max = teams[i];
            highest = i;
        }

    printf("%d %d", highest + 1, max);

    return 0;
}
