#include "header.h"

/**
 * _strcmp - compares two strings.
 * @s1: string
 * @s2: string
 * Return: result of the comparison of two strings.
 */

int _strcmp(const char *s1, const char *s2)
{
	int i = 0;

	while (s1[i])
	{

		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}

		else if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
