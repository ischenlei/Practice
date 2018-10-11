#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	int num = pow(2, n);
	printf("2^%d = %d", n, num);
	
	return 0;
} 
