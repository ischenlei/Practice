#include <stdio.h>

int main()
{
	char ch;
	int i, j, num[4] = {0};
	
	while (scanf("%c", &ch) && ch != '\n') {
		switch (ch) {
			case 'G' : num[0]++; break;
			case 'g' : num[0]++; break;
			case 'P' : num[1]++; break;
			case 'p' : num[1]++; break;
			case 'L' : num[2]++; break;
			case 'l' : num[2]++; break;
			case 'T' : num[3]++; break;
			case 't' : num[3]++; break;
			default : break;
		}
	}
	
	int max = 0;
	for (i = 0; i < 4; i++) 
		if (max < num[i])
			max = num[i];
	
	for (i = 0; i < max; i++) 
		for(j = 0; j < 4; j++) 
            if(num[j]) {
                num[j]--;
                switch(j) {
                    case 0: printf("G");    break;
                    case 1: printf("P");    break;
                    case 2: printf("L");    break;
                    case 3: printf("T");    break;
                    default:    break;
                }
        	}
	//printf("\n");
	      
 	return 0;
}
