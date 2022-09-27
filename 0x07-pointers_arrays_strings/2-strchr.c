#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: The string to check
 * @c: The character to find
 * Return: Pointer to @s or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	for (; *(s+i) != '\0'; i++)
		if (*(s+i) == c)
			return (s+i);
	if (*(s+i) == c)
	return ('\0');
}
