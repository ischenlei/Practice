#include <stdio.h>

int main()
{
	int N, A, B, i, num, sum = 0;
	scanf("%d %d %d", &N, &A, &B);

	for(i = 1; i <= N; i++) {
        num = i;
        int cont = 0;
		do {
			cont += num % 10;
			num /= 10;
		}while (num > 0);
		if (cont >= A && cont <= B)
			sum += i;
	}

	printf("%d", sum);

	return 0;
}


