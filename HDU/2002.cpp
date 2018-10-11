#include <iostream>
#include <iomanip>
using namespace std;
#define PI 3.1415927
int main()
{
	double r, v;
	while(cin >> r){
		v =  (PI * r * r * r) * 4 / 3;
		cout << fixed << setprecision(3) << v << endl;
	}
	
	return 0;
}
