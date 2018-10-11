#include <stdio.h>

int main()
{
	int num, i, cont;
	
	for (i = 1; i <= 10000; i++) {	
		scanf("%d", &num);
		if (num == 250) {
			cont = i;
			break;
		}
	}
	
	printf("%d", i);
	
	return 0;
}
