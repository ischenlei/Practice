#include <stdio.h>

int main()
{
	int N, M, i, j, k, cont, *min, *max, mark[100];
	int G1[100], G2[100][100];
	scanf("%d %d", &N, &M);
	
	for (i = 0; i < N; i++) {
		scanf("%d", &G1[i]);
		for (k = 0, j = 0; j < N - 1; j++) {
			int num;
			scanf("%d", &num);
			if (num >= 0 && num <= M) {
				G2[i][k] = num;
				k++;
			}
			else
				continue;
			max = min = &G2[i][0];
			if (k > 0) {
				if (*min > G2[i][k]){
					min = &G2[i][k];
					//printf("%d\n", *min);
				}		
				if (*max < G2[i][k]) {
					max = &G2[i][k];
					//printf("%d\n", *max);
				}
			}
		}
		cont = j - k - 1;
		G2[i][N - 1 - cont] = '\0';
		*max = 0;
		*min = 0;
	}
	
	for (i = 0; i < N; i++) {
		for (j = 0; G2[i][j] != '\0'; j++) {
			mark[i] += G2[i][j];
		}
		mark[i] = (G1[i] + (mark[i] / (N - 3 - cont)) ) / 2;
		printf("%d\n", mark[i]);
	}
	
	return 0;
}
