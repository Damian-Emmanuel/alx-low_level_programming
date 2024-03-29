#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of two diagonals of a square matirx
 * @a: pointer to start of matrix
 * @size: width of matrix colum
 * 
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, p, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		l += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - l - j);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}
