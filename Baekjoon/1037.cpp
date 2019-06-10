#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int inputSize;
	int Num;
	cin >> inputSize;

	int* arr = new int[inputSize];

	for (int i = 0; i < inputSize; i++)
	{
		cin >> arr[i];
	}

	sort(arr,arr+inputSize);
	
	Num = arr[0] * arr[inputSize-1];
	cout << Num << endl;

	delete arr;
	return 0;
}
