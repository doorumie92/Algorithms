// This code is exceeded time.
#include <iostream>

using namespace std;

int combi(int n, int r)
{
	if (n == r || r == 0)
		return 1;
	return combi(n - 1, r - 1) + combi(n - 1, r);
}
int main()
{
	int TestCase;

	cin >> TestCase;

	int West;
	int East;

	for (int i = 0; i < TestCase; i++)
	{
		cin >> West >> East;
		int value=combi(West, East);
		cout << value << endl;
	}

	return 0;
}