#include <stdio.h>

int main()
{
    int i, j, N, passwd[100];
    char answer, option;

    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < 4; j++) {
            scanf(" %c-%c", &option, &answer);
            if (answer == 'T') {
                switch (option) {
                case 'A' : passwd[i] = 1;    break;
                case 'B' : passwd[i] = 2;    break;
                case 'C' : passwd[i] = 3;    break;
                case 'D' : passwd[i] = 4;    break;
                }
            }
        }
    }

    for (i = 0; i < N; i++)
        printf("%d", passwd[i]);

    return 0;
}
