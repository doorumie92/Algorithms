#include <stdio.h>

int main()
{
	int a, b, c,n;
	int result;
	int resultArr[10] = { 0, };
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	result = a * b * c;
	while (result != 0)
	{
		resultArr[result % 10] += 1;
		result /= 10;
	}
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", resultArr[i]);
	}
}