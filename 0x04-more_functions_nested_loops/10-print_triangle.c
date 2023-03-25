#include "main.h"

/**
 * print_trianlge - prints a triangle
 *
 * Description: a triangle with #
 *
 * @size: size of the triangle
 *
 * Return: Always 0 (success)
*/

void print_triangle(int size)
{
	int hght, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hght = 1; hght <= size; hght++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((hght + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
