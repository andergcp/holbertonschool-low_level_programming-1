#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"


int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		++i;
	return (i);
}
int _isNum(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (num[i] < '0' || num[i] > '9')
			return (0);
	}
	return (1);
}
int main(int argc, char *argv[])
{
	int i, j, t1,t2, save, prod, tt;
	char *res;

	if (argc != 3 || !(_isNum(argv[1])) || !(_isNum(argv[2])))
	{
		puts("Error");
		exit(98);
	}
	t1 = _strlen(argv[1]), t2 = _strlen(argv[2]);
	tt = t1 + t2;
	res = malloc(sizeof(int *) * (t1 + t2));
	if (res == NULL)
		puts("Error"), exit(98);

	for (i = t2 - 1; i >= 0; i--)
	{
		save = 0;
		for (j = t1 - 1; j >= 0; j--)
		{
			prod = (argv[2][i] - '0') * (argv[1][j] - '0');
			save =  (prod / 10);
			res[(i + j) + 1] += (prod % 10);
			if (res[(i + j) + 1] > 9)
                        {
                                res[i + j] += res[(i + j) + 1] / 10;
                                res[(i + j) + 1] = res[(i + j) + 1] % 10;
                        }
			res[(i + j)] += save;
		}
	}
        if (res[0] == 0)
		i = 1;
	else
		i = 0;
	for (; i < tt; i++)
		printf("%d", res[i]);
	printf("\n");
	free(res);
	return(0);
}
