#include <iostream>

using namespace std;

int main()
{
	int i, num, temp;
	int first = 0,second=0,third=1;
	
	cin>> num;

	for (i = 0; i < num; i++) {
		second = first + third;
		first = third;
		third = second;
	}
	cout << first;

	return 0;
}


