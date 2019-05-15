#include <iostream>

using namespace std;

int main()
{
	int i = 1, j = 1;
	int count;
	char flag = 'u';
	cin >> count;
	count -= 1;
	while (count != 0)
	{
		if (i == 1 && flag == 'u')
		{
			flag = 'd';
			j++;
		}
		else if (flag == 'd' && j != 1)
		{
			i++;
			j--;
		}
		else if (j == 1 && flag == 'd')
		{
			flag = 'u';
			i++;
		}
		else if (flag == 'u' && i != 1)
		{
			i--;
			j++;
		}
		else
			;
		count--;
	}
	cout << i << "/" << j << endl;
	return 0;
}