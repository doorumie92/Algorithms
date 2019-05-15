#include <iostream>

using namespace std;

int main()
{
	char ch[100] = { 0 };
	char Alp[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	int value[26] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	cin >> ch;

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (ch[i] == Alp[j])
			{
				if(value[j] == -1)
				{	
					value[j] = i;
					j = 80;
				}
			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (i != 25)
			cout << value[i] << " ";
		else
			cout << value[i];
	}

	system("pause");
	return 0;

}