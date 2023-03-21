#include "main.h"
/**
 * main - entry point 
 * Description: print_alphabet - Print alphabet in lowercase 
 * Use only `_putchar`
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
