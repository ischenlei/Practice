#include <stdio.h>

int main()
{
    char words[10][10];
    int i;

    for (i = 0; ; i++) {
        scanf("%s", words[i]);
        if(getchar() == '\n')
            break;
    }

    for ( ; i >= 0; i--) {
        printf("%s", words[i]);
        if (i > 0)
            printf(" ");
    }

    return 0;
}
