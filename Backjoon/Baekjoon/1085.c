#include <stdio.h>

int main()
{
	int x, y, w, h;
	int min;
	int distance[4];

	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &w);
	scanf_s("%d", &h);

	
	distance[0] = x;
	distance[1] = y;
	distance[2] = h - y;
	distance[3] = w - x;


	min = distance[0];
	
	for (int i = 0; i < 4; i++)
	{
		if (min >= distance[i])
			min = distance[i];
		
	}

	printf("%d", min);
	
	return 0;
}