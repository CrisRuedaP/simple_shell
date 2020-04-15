#include "header.h"

int main(void)
{
	char *path_env = NULL, *directory = NULL;
	const char *delim = ":";
	int i = 0;

	path_env = _getenv("PATH");
	directory = strtok(path_env, delim);

	while (directory)
	{
		printf("%s\n", directory);
		directory = strtok(NULL, delim);
	}
	return (0);
}
