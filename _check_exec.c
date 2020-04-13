#include "header.h"

/**
* _check_exec - checks existence of command
* @command: name of executable file
*
* Return: 0 on success or -1 on error
*/

int _check_exec(const char *command)
{
	int valid_exec = access(command, F_OK);

	if (valid_exec != 1)
	{
		return (valid_exec);
	}
	else
		return (valid_exec);
}