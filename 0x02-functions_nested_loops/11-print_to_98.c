#include "holberton.h"
#include <stdio.h>
/**
 * _putnumber - check the code for Holberton School students.
 * @n: variable
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
