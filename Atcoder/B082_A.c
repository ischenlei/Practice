#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, x;
	
	scanf("%d %d", &a, &b);
	
	x = round((a + b) / 2.0);
	printf("%d", x);
	
	return 0;
}
