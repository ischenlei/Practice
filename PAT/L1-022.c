#include <stdio.h>
int main()
{
	int N, i, num, cont1 = 0, cont2 = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &num);
		if (num % 2 == 0)
			cont2++;
		else
			cont1++;
	}
	printf("%d %d", cont1, cont2);
	
	return 0;
}
