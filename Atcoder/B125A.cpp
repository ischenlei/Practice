#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	int N;
	int V[50], C[50];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> V[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> C[i];
	}
	int Vmax, Cmin, maxnum;
	sort(C, C+N);
	sort(V, V+N);

	Vmax = V[N-2] + V[N-1];
	
	Cmin = C[N-2] + C[N-1];
	
	
	maxnum = Vmax - Cmin;
	cout << maxnum;

	return 0;
}