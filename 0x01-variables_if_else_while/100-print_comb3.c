#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 *		combinations of two digits
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	 int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
