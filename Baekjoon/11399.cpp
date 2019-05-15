#include <iostream>

using namespace std;

int main()
{
	int Num, temp;

	int arr[1000] = { 0 };

	int waitTime = 0;

	cin >> Num;

	for (int i = 0; i < Num; i++)
	{
		cin >> arr[i];
	}

	for (int i = Num; i > 0; i--)
	{
		for (int j = 0; j < Num - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			else
				;

		}
	}

	for (int i = 0; i < Num; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			waitTime += arr[j];
		}
	}

	cout << waitTime;

	return 0;
}