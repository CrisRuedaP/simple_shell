#include "header.h"

/**
* _c_path_array - creates array with paths to executable file
*
* Return: 0 on success
*/

int _c_path_array(void)
{
	char *path_env = NULL, *directory = NULL;
	const char *delim = ":";
	char *dir_ptr = &directory;

	path_env = _getenv("PATH");
	directory = strtok(path_env, delim);

	while (directory)
		directory = strtok(NULL, delim);
	return (0);
}
