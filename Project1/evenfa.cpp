#include<stdio.h>

int main()
{
	int x;
	int y = 0;
	int sum = 0;
	for (x = 1; x < 4000000; x += y)
	{
		y = x - y;
		if (x % 2 == 0)
		{
			sum += x;
		}
	}
	printf("%d", sum);
}