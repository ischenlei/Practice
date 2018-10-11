#include <stdio.h>
int main()
{
	int high;
	
	scanf("%d", &high);
	printf("%.1f", (high - 100) * 0.9 * 2);
	
	return 0;
}
