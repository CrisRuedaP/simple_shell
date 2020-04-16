#include "header.h"

/**
 * _getenv - gets an array with the different paths
 * @path: it's a copy of PATH
 * Return: array
 */

char *_getenv(char *path)
{
	int i = 0;
	const char s[] = "=";
	char *token;
	char **envcp;
	/* store environ in a different variable before strtok*/

	envcp = environ;
	if (path != NULL)
	{
		while (envcp[i] != NULL)
		{
			token = strtok(envcp[i], s);
			if (_strcmp(token, path) == 0)
			{
				token = strtok(NULL, s);
			}
			i++;
		}
	}
	return (0);
}
