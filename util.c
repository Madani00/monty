#include <ctype.h>
#include "monty.h"

/**
 * is_digit - check is a string is a digit
 * @string: string
 * Return: 0 if error, 1 is success
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
 * @str: string
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
