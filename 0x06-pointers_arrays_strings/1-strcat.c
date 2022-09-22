#include "main.h"
#include <string.>

/**
 * _strncat - function to append some charx
 * @dest: first param
 * @src: second param
 * @n: 3rd param
 * Retrun: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(*dest, *src, n);
	return (dest);
}
