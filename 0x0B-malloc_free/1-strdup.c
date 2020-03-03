B#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - check the code for Holberton School students.
 * @str: pointer
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int c, s;

	char *d;

	while (str[s] != '\0')
	{
		s++;
		c++;
	}
	c = 0;
	d = malloc(sizeof(char) * (s + 1));
	while (c < (s + 1))
	{
		d[c] = str[c];
		c++;
	}
	d[c] = '\0';
	if (str == NULL)
		return (NULL);
	return (d);
}