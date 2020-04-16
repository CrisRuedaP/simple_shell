#include "header.h"

/**
 * _strlen - return the length of a string
 * @s: string
 *
 * Return: 0 on success
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	len++;

	return (len);
}
