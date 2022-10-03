#include "main.h"
#include <stdio.h>

/**
* _strlen_recursion - calculate length of a string
* @s: string to count
*
* Return: the length of string
*/
int _strlen_recursion(char *s)
{
return (*s ? _strlen_recursion(s + 1) + 1 : 0);
}
