#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

note: in each of the task run o.main.c file code given to you on the task below

and run gcc - Wall - pedantic - Werror - Wextra - std = gnu8ls9 o-main.c 0-memset.c - o  0-memset (this code make your file executable by turning it white to green)

