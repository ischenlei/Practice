#include <stdio.h>

void temp_num(long int P[3], long int A[3])
{
    int j;
    long int temp;
    for (j = 0; j < 3; j++) {
            temp = A[j];
            A[j] = P[j];
            P[j] = temp;
    }
}

void diff_money(long int P[3], long int A[3], int diff[3])
{
    int i;
    for (i = 2; i >= 0; i--) {
        if (A[i] >= P[i])
            diff[i] = A[i] - P[i];
        if (A[i] < P[i]){
            if (i == 2) {
                A[2] += 29;
                A[1]--;
            }
            if (i == 1) {
                A[1] += 17;
                A[0]--;
            }
            diff[i] = A[i] - P[i];
        }
    }
}

int main()
{
    long int P[3], A[3]; //Ó¦¸¶£¬Êµ¸¶
    int i, diff[3];

    scanf("%ld.%ld.%ld %ld.%ld.%ld", &P[0],&P[1],&P[2], &A[0],&A[1],&A[2]);

    for (i = 0; i < 3; i++) {
        if(A[i] > P[i])
            diff_money(P, A, diff);
        else {
            if (A[i] < P[i]) {
                temp_num(P, A);
                diff_money(P, A, diff);
                putchar('-');
            }
            else   {
                if (A[1] == P[1] && A[2] == P[2])
                   diff_money(P, A, diff);
                else  continue;
            }
        }
    }

    for (i = 0; i < 3; i++) {
        printf("%d", diff[i]);
        if (i < 2)
            putchar('.');
    }

    return 0;
}
