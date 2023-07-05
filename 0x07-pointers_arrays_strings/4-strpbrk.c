#include "main.h"

/**
 * _strpbrk -  locates a substring.
 * @haystack: sring to be examined
 * @needle: substring in haystack
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *string1, *string2;

	while (*haystack != '\0')
	{
		string1 = hystack;
		string2 = needle;
		
		while (*hystack != '\0' && *string2 != '\0' && *hystack == *string2)
		{
			hystack++;
			string2++;
		}
		if (string2 == '\0')
			return (string1);
		haystack = string1 + 1;
	}
	return (0);
}
