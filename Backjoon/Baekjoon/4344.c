#include <stdio.h>
#include <stdlib.h>

int main()
{
	double Avg=0.0, Total=0.0,Percentage = 0.0;
	int TestCase = 0;
	int StudentNum = 0;
	int Student[1000] = { 0 };
	
	scanf_s("%d", &TestCase);


	for (int j = 0; j < TestCase; j++)
	{
		double count = 0.0;
		scanf_s("%d", &StudentNum);
		for (int i = 0; i < StudentNum; i++)
		{
			scanf_s("%d", &Student[i]);
			Total += Student[i];
		}
		Avg = Total / (double)StudentNum;

		for (int i = 0; i < StudentNum; i++)
		{
			if (Student[i] > Avg)
				count += 1;
		}
		Percentage = (count / (double)StudentNum) * 100;
		printf("%.3f%%",Percentage);
		count = 0.0;
		Total = 0.0;
		Avg = 0.0;
	}
	
	return 0;

}