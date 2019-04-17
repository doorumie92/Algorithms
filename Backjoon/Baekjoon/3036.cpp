#include <iostream>

using namespace std;

int main()
{
	int Num;
	cin >> Num;
	int j = 1;
	int arr[100] = { 0 };

	for (int i = 0; i < Num; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i < Num; i++)
	{
		for (j = arr[0]; j > 0; j--)
		{
			if (arr[0] % j == 0 && arr[i] % j == 0)
			{
				cout << arr[0] / j << "/" << arr[i] / j << endl;
				break;
			}
		}
	}
	return 0;

	system("pause");
}