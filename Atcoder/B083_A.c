#include <stdio.h>

int main()
{
	int a, b, c, d, left, right;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	left = a + b;
	right = c + d;
	
	if (left > right)
		printf("Left");
	else if (left < right)
		printf("Right");
	else if (left == right)
		printf("Balanced");

	return 0;
}
