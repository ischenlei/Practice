#include <stdio.h>

int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else 
		return 1;
}

int main()
{
	int N, i;
	long sum = 0;
	scanf("%d", &N);
	
	for (i = 1; i <= N; i++) 
		sum += factorial(i);
	
	printf("%ld", sum);
	
	return 0;
}
