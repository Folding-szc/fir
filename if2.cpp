#include <iostream>
using namespace std;
int main0()
{
	int n;
	cout << "Enter your score:";
	cin >> n;
	if (n >= 60) {
		if (n >= 90)
		{
			cout << "Your score is A";
		}
		else if (n >= 80)
		{
			cout << "Your score is B";
		}
		else if (n >= 70)
		{
			cout << "Your score is C";
		}
		else 
		{ cout << "Your score is D"; }
	}
	else 
	{ 
		cout << "Your score is E "; 
	}
	return 0;
}