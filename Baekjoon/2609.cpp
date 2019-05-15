#include <iostream>

using namespace std;

int main()
{
	int A, B;

	cin >> A >> B;

	int val=0;

	int S=0, Big=0;
	if (A > B)
		val = A;
	else
		val = B;
	for (int i = val; i > 0; i--)
	{
		if (A % i == 0 && B % i == 0)
		{
			S = i;
			break;
		}
	}

	int k = 1;
	int temp = val;
	while (1)
	{
		if (temp % A == 0 && temp % B == 0)
		{
			Big = temp;
			break;
		}
		else
		{
			
			temp = val * k;
			k++;
		}
	}

	cout << S << endl;
	cout << Big << endl;


	return 0;
}
