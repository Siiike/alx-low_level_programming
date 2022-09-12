/*
* File: 0-postive_or_negative.c
* Auth: Breman D Baraba
/*
#inlude <stdio.h>
#include <stdio.h>
#inclclude <time.h>
#ininclude <time.h>
#include <stdlib.h>

/**
* main-Prints a random number and states whether it is positive , negative or zero
*
* Return: Always 0
*/
int main (void)
{
int n;
stand(time(0));
n=rand()-RAND_MAX /2;

if (n>0)
{
printf("%i is a positive number\n", n)
}
else if (n<0)
{
printf("%i is a negative number", n)
}
else
{
printf("%i is zero", n);
}
return (0);
}
