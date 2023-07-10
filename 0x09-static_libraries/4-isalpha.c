#include "main.h"


/**
 * _isalpha - Return 1 if c is a lowercase or uppercase letter
 * @c: The character to be checked
 * Return: 1 for alphabetic character or 0 for else
 */

int _isalpha(int c)
{

	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
