#include "main.h"
#include <stdlib.h>

int word_length(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_length - show index that mark the end of the first word
 * @str: string to search
 * Return: index that mark the end of the first word
 */

int word_length(char *str)
{
	int indx = 0, length = 0;

	while (*(str + indx) && *(str + indx) != ' ')
	{
		length++;
		indx++;
	}
	return (length);
}

/**
 * count_words - counts number of words in string
 * @str: string to search
 * Return: number of words in string
 */

int count_words(char *str)
{
	int indx = 0, words = 0, length = 0;

	for (indx = 0; *(str + indx); indx++)
		length++;

	for (indx = 0; indx < length; indx++)
	{
		if (*(str + indx) != ' ')
		{
			words++;
			indx += word_length(str + indx);
		}
	}
	return (words);
}

/**
 * strtow - splits a string into words
 * @str: strint to be splited
 * Return: a pointer to an array of strings (words)
 * NULL if str == NULL or str == "" or function fails,
 */
char **strtow(char *str)
{
	char **strings;
	int indx = 0, words, wid, letters, leng;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc((words + 1) * sizeof(char *));
	if (strings == NULL)
		return (NULL);

	for (wid = 0; wid < words; wid++)
	{
		while (str[indx] == ' ')
			indx++;

		letters = word_length(str + indx);

		strings[wid] = malloc((letters + 1) * sizeof(char));
		if (strings[wid] == NULL)
		{
			for (; wid >= 0; wid--)
				free(strings[wid]);

			free(strings);
			return (NULL);
		}

		for (leng = 0; leng < letters; leng++)
			strings[wid][leng] = str[indx++];

		strings[wid][leng] = '\0';
	}
	strings[wid] = NULL;

	return (strings);
}




