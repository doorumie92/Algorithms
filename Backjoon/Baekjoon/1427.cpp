#include <iostream>

using namespace std;

int main()
{
	char ch[11] = { 0 };
	cin >> ch;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (ch[j] <= ch[j + 1])
			{
				int swap = ch[j];
				ch[j] = ch[j + 1];
				ch[j + 1] = swap;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (ch[i] == NULL)
			break;
		else
			cout << ch[i];
	}

	system("pause");
}