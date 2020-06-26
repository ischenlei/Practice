#include <stdio.h>
int main()
{
	int A, B, X, left;
	scanf("%d %d %d", &X, &A, &B);
	left = (X - A) % B;
	printf("%d", left);
	
	return 0;
}
