#include <stdio.h>
#include <math.h>

int main()
{
	int len, i, j;
	char ch;
	
	scanf("%d %c", &len, &ch);
	int high = round(len / 2.0);
	
	for (i = 0; i < high; i++) {
		for (j = 0; j < len; j++) {
			putchar(ch);
		}
		putchar('\n');
	}
	
	return 0;
}
