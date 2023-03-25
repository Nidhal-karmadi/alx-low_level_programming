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
		int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

