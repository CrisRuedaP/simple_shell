#include "header.h"

/**
* _parse_input - parses input from the user and stores in an array
* @user_input: input from user
* @argv: array with arguments to execute
* Return: arguments count
*/

int _parse_input(char *user_input, char **argv)
{
	int ac = 0;
	char *parameter;
	char *temp = user_input;

	user_input = strtok(user_input, "\n\t\r");
	argv[ac] = user_input; /*El comando, el primer argumento del input*/
	for (ac = 1; temp != NULL; ac++)
	{
		parameter  = strtok(NULL, "\n\t\r");
		temp = parameter;
		argv[ac] = parameter;
	}
	argv[ac] = NULL;
	return (ac);
}