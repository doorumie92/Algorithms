#include <iostream>

using namespace std;

int main()
{
	int stick[4] = { 0, };
	char score[3] = { 0, };
	int total = 0;

	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			cin >> stick[i];
			total += stick[i];
		}
		if (total == 0)
			score[j] = 'D';
		else if (total == 1)
			score[j] = 'C';		
		else if (total == 2)
			score[j] = 'B';
		else if (total == 3)
			score[j] = 'A';
		else
			score[j] = 'E';
		total = 0;
	}

	cout << score[0] << endl;

	cout << score[1] << endl;

	cout << score[2] << endl;
}