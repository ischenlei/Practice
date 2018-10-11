#include <stdio.h>

int main()
{
    int N, Num, num = 0, cont = 0, fnum[37] = {0};
    int i;

    scanf("%d", &N);
    for (i = 0; i < N; i++, num = 0) {
        scanf("%d", &Num);
        do {
            num += Num % 10;
            Num /= 10;
        }while (Num > 0);
        fnum[num] += 1;
        if (fnum[num] == 1)
            cont++;
    }

    printf("%d\n", cont);
    for (i = 1; i < 37; i++)
        if (fnum[i])
            printf("%d ", i);

    printf("%c", 8);

    return 0;
}
