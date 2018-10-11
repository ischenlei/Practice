#include <stdio.h>

int main()
{
    char N[1000];
    int i, cont[10] = {0};

    scanf("%s", N);
    for (i = 0; N[i] != '\0'; i++) {
        switch (N[i]) {
        case '0' : cont[0]++;   break;
        case '1' : cont[1]++;   break;
        case '2' : cont[2]++;   break;
        case '3' : cont[3]++;   break;
        case '4' : cont[4]++;   break;
        case '5' : cont[5]++;   break;
        case '6' : cont[6]++;   break;
        case '7' : cont[7]++;   break;
        case '8' : cont[8]++;   break;
        case '9' : cont[9]++;   break;
        }
    }

    int t = 0;
    for (i = 0; i < 10; i++) {
        if (cont[i] > 0) {
            printf("%d:%d", i, cont[i]);
            t++;
            if (t < cont[i])
                putchar('\n');
        }
    }

    return 0;
}
