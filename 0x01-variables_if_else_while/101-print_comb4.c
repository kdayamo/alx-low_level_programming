#include <stdio.h>
/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			for (k = 50; k <= 57; k++)
			{
			if (j == i || j < i || k == j || k < j)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			putchar(k);
			if (i == 55 && j == 56 && k == 57)
				continue;
			putchar(44);
			putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
