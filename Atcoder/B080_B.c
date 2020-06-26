#include <stdio.h>

int main()
{
    int i, N, sum = 0, va[10];

    scanf("%d", &N);

    int N2 = N;
    for (i = 0; N > 0; i++) {
        va[i] = N % 10;
        N /= 10;
        sum += va[i];
    }

    if (N2 % sum == 0)
        printf("Yes");
    else
        printf("No");

    return 0;
}

