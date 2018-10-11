#include <stdio.h>

int main()
{
    int i, j, num, cont[10];

    for (i = 0; i < 10; i++){
        scanf("%d", &num);
        cont[i] = num;
    }

    for (i = 1; i < 10; i++) {
        if (cont[i] > 0) {
            printf("%d", i);
            cont[i] -= 1;
            break;
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < cont[i]; j++)
            switch (i) {
            case 0 : printf("0");   break;
            case 1 : printf("1");   break;
            case 2 : printf("2");   break;
            case 3 : printf("3");   break;
            case 4 : printf("4");   break;
            case 5 : printf("5");   break;
            case 6 : printf("6");   break;
            case 7 : printf("7");   break;
            case 8 : printf("8");   break;
            case 9 : printf("9");   break;
            }
    }

    return 0;
}
