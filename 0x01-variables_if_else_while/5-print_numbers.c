#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all numbers of base 10, starting from 0.
 * Use putchar
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');

	return (0);
}
