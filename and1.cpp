#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	switch (n / 10) {
	case 9:case 10:
		cout << "The degree is A " << endl;
		
	case 8:
		cout << "The degree is B" << endl;
		break;
	case 7:case 6:
		cout << "The degree is C " << endl;
		break;
	default:
		cout << "The degree is D " << endl;
		return 0;
	}

}