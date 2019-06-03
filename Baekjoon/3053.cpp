#include <iostream>

#define PI 3.14159265358979323846

using namespace std;

int main()
{
	long double R;

	cin >> R;
	cout << fixed;
	cout.precision(6);

	cout << R * R * PI << endl;
	cout << 2.0 * R * R << endl;

	return 0;
}
