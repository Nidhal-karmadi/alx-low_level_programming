#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int itr, itr2;

	for (itr = 0; s[itr] != '\0'; itr++)
	{
		for(itr2 = 0; accept[itr2] != s[itr]; itr2++)
		{
			if (accept[itr2] == '\0')
				return (itr);
		}
	}
	return (itr);

}

