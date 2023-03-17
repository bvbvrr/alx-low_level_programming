#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * 
 * Description: Prints the alphabet in lower and upper case
 * Use putchar
 *
 * Return: 0 
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
