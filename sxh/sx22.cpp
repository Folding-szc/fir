#include <iostream>
using namespace std;
int main0()
{
	
	for (int i = 1;i <= 100; i++)
	{
		if (i / 10 == 7 || i % 10 == 7 || i % 7 == 0)
		{
			cout << i <<"   " << "knock the desk" << endl;
		}
	}
	return 0;
}