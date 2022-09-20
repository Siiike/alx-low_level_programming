#include "main.h"
/**
* rv_string:  a function that reverses a string 
* @s: a code to check
* Description : prints the whole string in reverse 
* Return: 0 is success
*/
void rev_string(char *s)
{
int a = 0, b, c;
char d;

while (s[a] != '\0')
{
a++
}
c = a - 1;
for (b = 0; c >= 0 && b< c; c--, b++)
{
d = s[b];
s[b] = s[c];
s[c] = d;
}
}
