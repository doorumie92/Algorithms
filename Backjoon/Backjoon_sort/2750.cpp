#include <iostream>

using namespace std;

int main()
{
	int length, temp=0,count=0;
	
	cin >> length;

	int *array = new int[length];

	for (int i = 0; i < length; i++)
	{
		cin >> array[i];
	}
	
	for (int j = length; j > 0; j--)
	{
		for (int i = 0; i < length-count-1; i++ )
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
		count++;
	}

	for (int i = 0; i < length; i++)
	{
		cout << array[i] << endl;
	}

	delete[] array;

	return 0;
}