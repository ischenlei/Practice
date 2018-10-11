#include <stdio.h>

int main()
{
	int T, i;
	long A[10], B[10], C[10];
	
	scanf("%d", &T);
	for (i = 0; i < T; i++) 
		scanf("%ld %ld %ld", &A[i], &B[i], &C[i]);
		
	
	for (i = 0; i < T; i++) {
		if (A[i] + B[i] > C[i])
			printf("Case #%d: true\n", i + 1);
		else
			printf("Case #%d: false\n", i + 1);
	}
	
	
}
