/*
* File: 0-positive_or_negative.c
* Auth: Breman D Baraba
*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main-Prints a random number and states whether it is positive, negative or zero
*
* Return: Always 0
*/
int main(void)
{
int n;
stand(time(0));
stand(time(0));
srand (time(0));
n=rand()-RAND_MAX /2;

if (n>0)
{
printf("%i is a positive number\n", n)
}
else if (n<0)
{
printf("%i is a negative number\n", n)
}
else
{
printf ("%i is zero\n", n);
}
return (0);
}
