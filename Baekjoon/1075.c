#include <stdio.h>

int main()
{
	int N, F;

	scanf_s("%d", &N);
	scanf_s("%d", &F);

	int result;

	if ((N % F) == 0)
		printf("00");
	else
	{
		int k = 0;
		k = F * (N / F);
		result = N - k;
	}

	system("pause");
	return 0;

}