#include "main.h"
#include <stdlib.h>

int wordLen(char *str);
int wordCount(char *str);
char **strtow(char *str);

/**
 * wordLen - locates the string
 * @str: string to locate
 * Return: index
 */

int wordLen(char *str)
{
	int index = 0;
	int len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * wordCount - counts words within string
 * @str: searched string
 * Return: number of words counted
 */

int wordCount(char *str)
{
	int index;
	int words;
	int len;

	for (index = 0; *(str + index); index++)
		len++;
	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += wordLen(str + index);
		}
	}
	return (words);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: NULL for str = "", otherewise string pointer
 */

char **strtow(char *str)
{
	char **strings;
	int index = 0;
	int words = 0;
	int w;
	int letters;
	int l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = wordCount(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));

	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = wordLen(str + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

					free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];
		strings[w][l] = '\0';
	}

	strings[w] = NULL;
	return (strings);
}

