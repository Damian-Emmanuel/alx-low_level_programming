#include <stdio.h>

/**
 * main - prints the numbers from 00 to 99
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b;
for (a = 48; a <= 57; a++)
{
for (b = 48; b <= 57; b++)
{
putchar(a);
putchar(b);
if (a != 57 || b != 57)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
