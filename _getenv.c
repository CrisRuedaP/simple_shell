#include "header.h"

char *_getenv(const char *name)
{
	int i = 0;
	const char s[] = "=";
	char *token;

	if (name != NULL)
	{
		while (environ[i] != NULL)
		{
			token = strtok(environ[i], s);
			if (strcmp(token, name) == 0)
			{
				token = strtok(NULL, s);
				return (token);
			}
			i++;
		}
	}
	return (0);
}
