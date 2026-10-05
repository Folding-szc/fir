#include <iostream>
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	int val = 0;
	while (1)
	{
		cin >> val;


		if (val > num)
		{
			cout << "猜测过大" << endl;
		}
		else if (val < num)
		{
			cout << "猜测过小" << endl;
		}
		else
		{
			cout << "猜测正确" << endl;

			break;
		}

	}
}