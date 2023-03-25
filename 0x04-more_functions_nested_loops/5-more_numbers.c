#iclude "main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 *			can only use _putchar three times
 *
 * Return: Always 0 (success)
*/

void more_numbers(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch >= 10)
				_putchar((ch / 10) + 48);
			_putchar((ch % 10) + 48);
		}
		_putchar('\n');
	}


