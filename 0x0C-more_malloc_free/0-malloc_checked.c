#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_chexker - Allocates memory using malloc.
* @b: The number of bytes to be allowed.
*
* Return: A pointer to the allocated memory.
*/
void *malloc_checked(unsigned int b)
{
void *mem = malloc(b);

if (mem	== NULL)
exit(98);

return (mem);
}