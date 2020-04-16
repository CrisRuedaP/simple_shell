#include "header.h"

/**
* _check_exec - checks existence of command
* @command: name of executable file, args[0] gotten from _parse_input
*
* Return: 0 on success or -1 on error
*/

int _check_exec(char *command)
{
	char **dir_ptr = NULL;
	int i = 0, valid_command;
	
	{
		while (dir_ptr)
		{
			command = _str_concat(dir_ptr[i], command);
			i++;
		}	
	}	
	valid_command = access(command, F_OK);
	if (valid_command != 1)
		return (valid_command);
	else
		return (valid_command);
}