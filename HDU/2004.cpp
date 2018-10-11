#include <iostream>
using namespace std;
main()
{
	int score;
	while(cin >> score){
		if(score > 100 || score < 0){
			cout << "Score is error!" << endl;
			continue;
		}
		switch(score / 10){
			case 0: 
			case 1: 
			case 2: 
			case 3: 
			case 4: 
			case 5: cout << "E" << endl;
				break;
			case 6: cout << "D" << endl;
				break;
			case 7: cout << "C" << endl;
				break;
			case 8: cout << "B" << endl;
				break;
			case 9: 
			case 10: cout << "A" << endl;
				break;
		}
	}
	
}
