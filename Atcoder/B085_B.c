#include <stdio.h>
int main()
{
	int N, i, j, d[100];
	
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &d[i]);
	int temp;
	int cont = N;
	for (i = 0; i < N; i++) {
		for (j = i + 1; j < N; j++) {
			if (d[i] < d[j]) {
				int temp = d[i];
				d[i] = d[j];
				d[j] = temp;
			}
		}
		if (d[i] == d[i - 1] && i >= 1)
			cont--;
	}
	
	printf("%d", cont);
	
	return 0;
}
