#include <stdio.h>
int main()
{
	int A, B, i, j;
	char S[20];
	scanf("%d %d", &A, &B);
	scanf("%s", S);
	
	for (i = 0; i != '\0'; i++) {
		if (i < A) {
			if (S[i] >= '0' && S[i] <= '9')
				continue;
			else {
				printf("No");
				break;
			}	
		}
	}
	return 0;
} 
