#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - void says there's no input arguments
*
*Return: will return 0 if statement works
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("is positive");
}
else
{
if (n < 0)
{
printf("is negative");
}
else
{
printf("is zero");
}
}
return (0);
}
