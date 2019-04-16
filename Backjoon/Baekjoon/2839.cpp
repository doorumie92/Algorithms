#include <iostream>

using namespace std;

int main()
{
	int Num;
	int count = 0;
	cin >> Num;

	while (Num > 0)
	{
		if (Num % 5 == 0)
		{
			Num -= 5;
			count++;
		}
		else if (Num % 3 == 0)
		{
			Num -= 3;
			count++;
		}
		else if (Num > 5)
		{
			Num -= 5;
			count++;
		}
		else
		{
			count = -1;
			break;
		}
	}

	cout << count;
	
	return 0;

}