#include <stdio.h>

int main()
{
	int N, i;
	float h, heigh[10];
	char sex;
	
	scanf("%d", &N);
	for (i = 0 ; i < N; i++) {
		scanf("\n%c %f", &sex, &h);
		if (sex == 'F')
			heigh[i] = h * 1.09;
		if (sex == 'M')
			heigh[i] = h / 1.09;
	}
	
	for (i = 0; i < N; i++)
		printf("%.2f\n", heigh[i]);
		
	return 0;
}
