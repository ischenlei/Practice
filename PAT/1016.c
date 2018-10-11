#include <stdio.h>

int main()
{
    char A[10], B[10];
    int DA, DB, PA = 0, PB = 0, i, sum;

    scanf("%s %d %s %d", A, &DA, B, &DB);
    for (i = 0; A[i] != '\0'; i++) {
        A[i] = A[i] - 48;
        if (A[i] == DA)
            PA = PA * 10 + DA;
    }
    for (i = 0; B[i] != '\0'; i++) {
        B[i] = B[i] - 48;
        if (B[i] == DB)
            PB = PB * 10 + DB;
    }

    sum = PA + PB;
    printf("%d", sum);

    return 0;
}
