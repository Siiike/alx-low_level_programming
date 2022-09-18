#include "main.h"
/**
<<<<<<< HEAD
 * print_numbers - a function that prints the numbers
 * followed by a new line.
 * Return: Always 0
 */
void print_numbers(void)
{
		int i = '0';
			for (; i <= '9'; i++)		_putchar(i);
				_putchar('\n');
=======
 * print_numbers - print 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar (i);
	_putchar ('\n');
>>>>>>> 2eb8408233bc1f2ef08f377d881cbfef0dd0ea94
}

