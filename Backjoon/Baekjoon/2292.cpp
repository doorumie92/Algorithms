#include <iostream>


int main()
{
	int input,value=1,sixnum=6;
	std::cin >> input;

	
	while (1)
	{
		if (input == 1)
			break;
		value++;
		input = input - sixnum;
		if (input < 1)
			break;
		else
			sixnum += 6;
	}

	std::cout << value << std::endl;

	return 0;
}

