#include <stdio.h>
#define CONT 10000

int main()
{
	int N, i, j;
	int mark[CONT];
	char name[CONT][15], num[CONT][15];
	
	scanf("%d", &N);
	
	for (i = 0; i < N; i++) 
		scanf("%s %s %d", &name[i], &num[i], &mark[i]);
		
	int max = mark[0], min = mark[0];
	int m, n;
	for (i = 0; i < N; i++) {
		if (min > mark[i]) {
			min = mark[i];
			n = i;
		}	
		if (max < mark[i]) {
			max = mark[i];
			m = i;
		}	
	}
	
	printf("%s %s\n", name[m], num[m]);
	printf("%s %s\n", name[n], num[n]);
	
	return 0;
} 
