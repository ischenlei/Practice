#include <stdio.h>

int main()
{
	int D, day; 
	scanf("%d", &D);
	
	if (D == 6)
		day = 1;
	else if (D == 7)
		day = 2;
	else
		day = D + 2; 
		
	printf("%d", day);
	
} 
