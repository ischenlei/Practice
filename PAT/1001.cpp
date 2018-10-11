#include <iostream>
using namespace std;

int main()
{
	int N, A, B, C;
	char judge[10];
	
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> A >> B >> C;
		if (A + B > C)
			judge[i] = 'T';
		else
			judge[i] = 'F';
	}
	
	for (int i = 0; i < N; i++){
		if(judge[i] == 'T')
			cout << "Case #" << i + 1 << ": true" << endl;
		else
			cout << "Case #" << i + 1 << ": false" << endl;
	}
		
	return 0;
} 
