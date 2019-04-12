#include <iostream>

using namespace std;

int main()
{
	int input[8];
	int count = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> input[i];
	}
	for (int i = 0; i < 8; i++)
	{
		if (input[i] > input[i + 1])
			count++;
		else
			count--;
	}
	if (count == 0)
		cout << "mixed";
	else if (count == 8)
		cout << "descending";
	else
		cout << "ascending";

	system("pause");
	return 0;
}