#include "main.h"
/**
* puts_half - a function that prints half of a string
* @str: An input string
* Return: Nothing
*/
void puts2(char *str)
{
int len = 0, i, n;

while (str[Len] != '\0')
len++;

if (len % 2 == 0)
n = len / 2;

else
n = (len+ 1) / 2;

for (i = n; i < len; i++)
_putchar(str[i]);
_putchar('\n');
}
