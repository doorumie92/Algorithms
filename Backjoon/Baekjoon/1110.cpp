#include <iostream>

using namespace std;

int main()
{
	int Num[2] = { 0 };
	int Origin[2] = { 0 };
	int temp = 0;
	int count = 1;
	int init;
	cin >> init;
	for (int i = 0; i < 2; i++)
	{
		Num[0] = init / 10;
		Num[1] = init % 10;
		Origin[i] = Num[i];
	}

	while (1)
	{
		temp = Num[0] + Num[1];
		if (temp > 9)
			temp -= 10;
		Num[0] = Num[1];
		Num[1] = temp;

		
		if (Num[0] == Origin[0] && Num[1] == Origin[1])
			break;
		else
			count++;
	}

	cout << count << endl;
	
	return 0;
}