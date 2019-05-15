#include <iostream>

using namespace std;

int main()
{
	int TestCase;
	int arr[15][14] = { 0 };
	int floor = 0, roomNumber = 0;
	cin >> TestCase;
	for (int i = 1; i < 15; i++)
		arr[0][i - 1] = i;

	for (int i = 1; i < 15; i++)
		for (int j = 0; j < 14; j++)
			for (int k = 0; k <= j; k++)
				arr[i][j] += arr[i - 1][k];


	for (int i = 0; i < TestCase; i++)
	{
		cin >> floor >> roomNumber;
		cout << arr[floor][roomNumber - 1];
	}
	return 0;
}