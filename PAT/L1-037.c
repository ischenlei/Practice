#include <stdio.h>

int main()
{
	float a, b;
	
	scanf("%f %f", &a, &b);
	
	if (a == 0 || b == 0)
		printf("%.f/%.f=Error", a, b);
	else if (b < 0)
		printf("%.f/(%.f)=%.2f", a, b, a / b);
	else
		printf("%.f/%.f=%.2f", a, b, a / b);
	
	return 0;
}
