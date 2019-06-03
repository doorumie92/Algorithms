#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
	return a > b;
}

int main()
{
	int inputSize = 0;
	int min = 0;
	cin >> inputSize;

	int* arrA = new int[inputSize];
	int* arrB = new int[inputSize];

	for (int i = 0; i < inputSize; i++)
	{
		cin >> arrA[i];
	}
	for (int i = 0; i < inputSize; i++)
	{
		cin >> arrB[i];
	}

	sort(arrA, arrA + inputSize);
	sort(arrB, arrB + inputSize, compare);

	for (int i = 0; i < inputSize; i++)
	{
		min += arrA[i] * arrB[i];
	}

	cout << min << "\n";

	return 0;

	
}
