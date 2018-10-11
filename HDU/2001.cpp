#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double x1, x2, y1, y2;
	double d;
	while(cin >> x1 >> y1 >> x2 >> y2) {
		d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
		cout << fixed << setprecision(2) << d << endl;
	}
	return 0;
}
