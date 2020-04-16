#include "header.h"

/**
* _check_exec - checks existence of command
* @command: name of executable file without the path
*
* Return: 0 on success or -1 on error
*/

int _check_exec(const char *command)
{
	int valid_command = access(command, F_OK);
	char **dir_ptr;
	int i = 0; 

	
	if (*command != '//')
	{
		while (dir_ptr)
		{
			command = _strcat(dir_ptr[i], command);
			i++;
		}	
	}	
	if (valid_command != 1)
		return (valid_command);
	else
		return (valid_command);	
}