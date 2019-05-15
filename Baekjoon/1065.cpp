#include <iostream>

using namespace std;

int main()
{
	int count = 0;
	int temp[3] = { 0 };
	
	int input;
	cin >> input;

	if (input < 100)
	{
		count += input;
		cout << count << endl;
		return 0;
	}
	else
	{
		count += 99;
		int i = 100;
		for (i; i <= input; i++)
		{
			temp[0] = i / 100;
			temp[1] = (i - temp[0] * 100) / 10;
			temp[2] = ((i - temp[0] * 100) - (temp[1] * 10)) % 10;

			if (temp[0] - temp[1] == temp[1] - temp[2])
				count++;
		}
	}
	cout << count << endl;

	system("pause");
}