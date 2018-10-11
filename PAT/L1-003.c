#include "stdio.h"

int main()
{
	int i,  N[10] = {0};
	char ch;
	for (i = 0; scanf("%c", &ch); i++) {
		switch(ch) {
			case '0': N[0]++; break;
			case '1': N[1]++; break;
			case '2': N[2]++; break;
			case '3': N[3]++; break;
			case '4': N[4]++; break;
			case '5': N[5]++; break;
			case '6': N[6]++; break;
			case '7': N[7]++; break;
			case '8': N[8]++; break;
			case '9': N[9]++; break;
			default : goto label;
		}
	}
	label: ;	
	
	for (i = 0; i < 10; i++) 
		if (N[i] != 0)
			printf("%d:%d\n", i, N[i]);
	
	
	
	return 0;
}
