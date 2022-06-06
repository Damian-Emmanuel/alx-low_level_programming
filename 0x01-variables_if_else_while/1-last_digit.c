#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int lastDigit, n;
char *data;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
if (lastDigit > 5)
data = "and is greater than 5\n";
else if (lastDigit == 0)
data = "and is 0\n";
else if (lastDigit > 6 || lastDigit != 0)
data = "and is less than 6 and not 0\n";
else
printf("Impossible %d\n", n);
printf("last digit of %d is %d %s", n, lastDigit, data);
return (0);
}
