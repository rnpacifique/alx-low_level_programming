#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: string
 * Return: a pointer
 */

char *cap_string(char *s)
{
	int count = 0;
	int a;
	int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + count) >= 97 && *(s + count) <= 122)
		*(s + count) = *(s + count) - 32;
	count++;
	while (*(s + count) != '\0')
	{
		for (a = 0; a < 13; a++)
		{
			if (*(s + count) == separators[a])
			{
				if ((*(s + (count + 1)) >= 97) && (*(s + (count + 1)) <= 122))
					*(s + (count + 1)) = *(s + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return (s);
}

