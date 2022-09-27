

/**
 * _strchr - Locates a character in a string
 * @s: The string to check
 * @c: The character to find
 * Return: Pointer to @s or NULL
 */

char *_strchr(char *s, char c)
{
	int a = 0, b;
	while (s[a])
	{
		a++;
	}
	for (b = 0; b <= a; b++
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ("\n);
}
