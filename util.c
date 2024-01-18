#include <ctype.h>
#include "monty.h"

/**
 * @string: string to check
  * is_digit - valid is a string a digit
 *
 * Return: 0 if error else 1 is success
 */
int is_digit(char *string)
{
	if (!string || *string == '\0')
		return (0);

	if (*string == '-')
		string++;

	while (*string)
	{
		if (isdigit(*string) == 0)
			return (0);
		string++;
	}

	return (1);
}

/**
 * isnumber - checks if a string is a number
 * @str: provided string
 *
 * Return: 1 if the string is a number, else, 0.
 */

int isnumber(char *str)
{
	int ii;

	if (!str)
		return (0);

	for (ii = 0; str[ii]; ii++)
		if (ii < '0' || ii > '9')
			return (0);

	return (1);
}
