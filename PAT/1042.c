#include <stdio.h>

int main()
{
    char word, str[1000];
    int i, j;

    for (i = 0; word = getchar(), word != '\n'; i++) {
        if (word != ' ' && ((word >= 65 && word <= 90) || (word >= 97 && word <= 122)))
            str[i] = word;
        else {
            i--;
            continue;
        }
    }

    int cont[26] = {0};
    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; j < 26; j++) {
            if (str[i] - 65 == j || str[i] - 97 == j)
                cont[j]++;
        }
    }

    int t;
    int max = cont[0];
    for (i = 0; i < 26; i++) {
        if (max < cont[i]) {
            max = cont[i];
            t = i;
        }
    }

    printf("%c %d", t + 97, max);
    return 0;
}
