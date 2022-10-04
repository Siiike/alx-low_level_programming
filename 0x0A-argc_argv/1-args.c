#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
* main - main function
* @argc: argumentc
* @argv: vector of arguments
* Return: always 0
*/
int main(int argc, char *argc[])
{
UNUSED(argv);
printf("%d\n", argc - 1);
return (0);
}
