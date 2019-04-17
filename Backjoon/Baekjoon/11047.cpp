#include <iostream>

using namespace std;

int main()
{
	int N;
	int money, count=0;
	cin >> N >> money;

	int arr[10] = { 0 };

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = N-1; i >= 0; i--)
	{
		int temp;
		temp = money / arr[i];
		count += temp;
		money = money % arr[i];
	}

	cout << count << endl;

	return 0;
}