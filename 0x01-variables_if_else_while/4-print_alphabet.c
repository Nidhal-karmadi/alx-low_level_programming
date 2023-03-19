#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet letters except q and e
 *
 * Return: Always 0 (succes)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++ :
		putchar(ch) :
		ch++ :
	}
	putchar('\n');

	return (0);
}
