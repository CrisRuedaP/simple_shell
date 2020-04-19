#include "header.h"

/**
* _parse_input - parses input from the user and stores in an array
* @user_input: input from user
* @arg: array with arguments to execute
* Return: arguments count
*/

int _parse_input(char *user_input, char **arg)
{
	int ac = 0;
	char *parameter;
	char *temp = user_input;

	user_input = strtok(user_input, " \n\t\r");
	arg[ac] = user_input;
	for (ac = 1; temp != NULL; ac++)
	{
		parameter = strtok(NULL, " \n\t\r");
		temp = parameter;
		arg[ac] = parameter;
	}
	arg[ac] = NULL;
	return (ac);
}
