#include <iostream>

using namespace std;

int main()
{
	int input,j=2,k;
	int arr[100] = { 0 };
	int count = 0;
	cin >> input;

	for (int i = 0; i < input; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < input; i++)
	{
		j = 2;
		while (1)
		{
			if (j <= arr[i] - 1)
			{
				if (arr[i] % j == 0)
				{
					break;
				}
				else
					j++;
			}
			else if (j == arr[i])
			{
				count++;
				break;
			}
			else
				break;
		}
	
		
	}

	cout << count;

	
	return 0;
}