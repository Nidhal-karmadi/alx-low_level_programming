#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet in lower case then in uppercase
 *
 * Return: Always 0 (succes)
*/

int main(void)
{
	char ch = 'a';
	char ch = 'A';
	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z*/
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
