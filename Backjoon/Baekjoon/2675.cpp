#include <iostream>

using namespace std;

int main()
{
	char ch[20] = { 0, };
	int a;
	int testCase;
	cin >> testCase;
	
	for (int k = 0; k < testCase; k++)
	{
		cin >> a >> ch;
		int len = strlen(ch);

		for (int i = 0; i < len; i++)
		{
			for (int j = 0; j < a; j++)
			{
				if (ch != 0)
					cout << ch[i];
				else
					;
			}
		}
		cout << endl;
	}

	return 0;
}