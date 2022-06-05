#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int m;
char ch;
for (m = 48; m < 58; m++)
{
putchar(m);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
