#include "header.h"

char *_strdup(char *str)
{
	int len = 0;
	int n, i = 0;
	char *dest;
	
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		dest[n] = str[n];
	return (dest);
}