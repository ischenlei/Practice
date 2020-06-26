#include <stdio.h>

int main()
{
    int N, A, T, money;

    scanf("%d %d %d", &N, &A, &T);

    money = N * A;
    if (money < T)
        printf("%d", money);
    else
        printf("%d", T);

    return 0;
}

