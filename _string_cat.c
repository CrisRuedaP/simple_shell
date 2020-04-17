#include "header.h"

/**
 * _str_concat - concatenates two strings
 * @s1: first part of the string
 * @s2: second part of the string
 *
 * Return: pointer to the new string
 */

char *_str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *s3;

	s3 = malloc((_strlen(s1) + _strlen(s2) + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);

	for (; s1[i] ; i++)
		s3[i] = s1[i];

	for (; s2[j] ; j++, i++)
		s3[i] = s2[j];

	s3[i] = '\0';

	return (s3);
}
