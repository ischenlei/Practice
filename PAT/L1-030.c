#include <stdio.h>

int main()
{
	int n, i, j, sex[50];
	char name[50][10];
	
	scanf("%d", &n);
	for (i = 0 ; i < n; i++)
		scanf("%d %s", &sex[i], &name[i]);
	
	for (i = 0; i < (n / 2); i++) {
		for (j = n - 1; j >= (n / 2); j--) {
			if (sex[j] != 2 && (sex[i] != sex[j])) {
				printf("%s %s\n", name[i], name[j]);
				sex[j] = 2;
				break;
			}
		}
	}
	
	return 0;
}
