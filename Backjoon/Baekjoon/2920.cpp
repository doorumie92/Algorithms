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
	for (int i = 0; i < 7; i++)
	{
		if (input[i] > input[i + 1])
			count++;
		else
			count--;

	}
	if (count == -7)
		cout << "ascending" << endl;
	else if (count == 7)
		cout << "descending" << endl;
	else
		cout << "mixed"<<endl;

	return 0;
}