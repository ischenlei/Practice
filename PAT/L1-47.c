#include <stdio.h>

int main()
{
	int N, i;
	int breath[10], pulse[10]; 
	char name[10][5];
	scanf("%d", &N);
	for (i = 0; i < N; i++) 
		scanf("%s %d %d", &name[i], &breath[i], &pulse[i]);
		
	for (i = 0; i < N; i++) {
		if ((breath[i] < 15) || (breath[i] > 20) || (pulse[i] < 50 || pulse[i] > 70))
			printf("%s\n", name[i]);
			
	}
	
	return 0;	
}
