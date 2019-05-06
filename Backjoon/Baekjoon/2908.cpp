//this is linux
#include <iostream>

using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;

	int arrA[3];
	int arrB[3];

	arrA[0] = A / 100;
	A -= arrA[0] * 100;
	arrA[1] = A / 10;
	A -= arrA[1] * 10;
	arrA[2] = A;
	A = arrA[2] * 100 + arrA[1] * 10 + arrA[0];

	arrB[0] = B / 100;
	B -= arrB[0] * 100;
	arrB[1] = B / 10;
	B -= arrB[1] * 10;
	arrB[2] = B;
	B = arrB[2] * 100 + arrB[1] * 10 + arrB[0];

	if (A > B)
		cout << A << endl;
	else
		cout << B << endl;

	return 0;
}
