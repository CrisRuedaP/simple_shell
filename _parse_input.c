#include "header.h"

/**
* _parse_input - parses input from the user and stores in an array
* @user_input: input from user
* Return: arguments count
*/

char  **_parse_input(char *user_input)
{
	int ac = 0, token_number = 0;
	char *parameter, *temp = NULL, **arg = NULL, *token = NULL;
	char *token1;

	if (user_input)
	{
		temp = _strdup(user_input);
		parameter = _strdup(temp);
		token = strtok(temp, DELIMIT);
		while (token != NULL)
		{
			token_number++;
			token = strtok(NULL, " \n\t\r");
		}
		arg = malloc(sizeof(char *) * (token_number + 1));
		token = strtok(parameter, DELIMIT);
		while (token != NULL)
		{
			arg[ac] = _strdup(token);
			token1 = arg[ac];
			if (*token1 != *WHITE_SP)
				ac++;
			token = strtok(NULL, DELIMIT);
		}
		arg[ac] = '\0';
		free(temp);
		free(parameter);
		return (arg);
	}
	return (NULL);
}