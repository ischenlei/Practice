#include <stdio.h>

int main()
{
	char ch;
	int i = 0;
	
	while (scanf("%c", &ch) && ch != '\n') {
		i++;
		if (i > 1)
			printf(" ");
		switch (ch) {
			case '-' : printf("fu");    break;
			case '0' : printf("ling");    break;
			case '1' : printf("yi");    break;
			case '2' : printf("er");    break;
			case '3' : printf("san");    break;
			case '4' : printf("si");    break;
			case '5' : printf("wu");    break;
			case '6' : printf("liu");    break;
			case '7' : printf("qi");    break;
			case '8' : printf("ba");    break;
			case '9' : printf("jiu");    break;
			default : break;
		}	
		
	}
	
	
	return 0;
}
