#include <iostream>

using namespace std;

int main()
{
	char score[80] = { 0 };
	int TestCase;
	int count = 0;
	int LastScore=0;
	cin >> TestCase;

	for (int i = 0; i < TestCase; i++)
	{
		cin >> score;
		for (int j = 0; j < 80; j++)
		{
			if (score[j] == 'O')
			{
				count++;
				LastScore += count;
			}
			else
			{
				count = 0;
			}
		}
		cout << LastScore << endl;
		LastScore = 0;
		for (int k = 0; k < 80; k++)
		{
			score[k] = 0;
		}
	}

	return 0;
}