#include <iostream>

using namespace std;

int main()
{
	double A,B,result;

	cin >> A >> B;

	result = A / B;

	cout.setf(ios::fixed);
	cout.precision(9);
	cout << result;

	system("pause");
	return 0;
}