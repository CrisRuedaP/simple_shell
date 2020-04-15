#include "header.h"

char *_getenv(const char *fullpath)
{
	int i = 0;
	const char s[] = "=";
	char *token;
	/* store environ in a different variable before strtok*/

	if (fullpath != NULL)
	{
		while (environ[i] != NULL)
		{
			token = strtok(environ[i], s);
			if (strcmp(token, fullpath) == 0)
			{
				token = strtok(NULL, s);
				return (token);
			}
			i++;
		}
	}
	return (0);
}
