#include <iostream>

using namespace std;

int main()
{
	int arr[10000] = { 0 };

	for (int i = 0; i < 10000; i++)
	{
		arr[i] = i+1;
	}

	int number = 1;
	int temp = 0;
	int i = 1;

	for (i; i < 10000; i++)
	{
		if (arr[i - 1] == 0)
		{
			;
		}
		else
		{
			while (1)
			{
				if (number < 10)
				{
					temp = number + number;
					arr[temp - 1] = 0;
				}
				else if (number < 100 && number >= 10)
				{
					temp = number + (number / 10) + (number % 10);
					arr[temp - 1] = 0;
				}
				else if (number < 1000 && number >= 100)
				{
					temp += number;
					temp += number / 100;
					number = number - (number / 100) * 100;
					temp += number / 10;
					temp += number % 10;

					if (temp - 1 < 10000)
						arr[temp - 1] = 0;
				}
				else if (number < 10000 && number >= 1000)
				{
					temp += number;
					temp += number / 1000;
					number = number - ((number / 1000) * 1000);
					temp += number / 100;
					number = number - ((number / 100) * 100);
					temp += number / 10;
					temp += number % 10;
					if (temp - 1 < 10000)
						arr[temp - 1] = 0;
				}
				else
					;
				if (number < 10000)
				{
					number = temp;
					temp = 0;
				}
				else
				{
					number = i;
					break;
				}
			}
		}
	}

	

	for (int i = 0; i < 10000; i++)
	{
		if (arr[i] != 0)
			cout <<  arr[i] << endl;

	}
	return 0;
}
