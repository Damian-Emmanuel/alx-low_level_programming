#include <unistd.h>

/**
 * _putchar - writes the character c to be stdout
 * @c: The character to be print
 *
 * Return: On success 1.
 * Return: On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
