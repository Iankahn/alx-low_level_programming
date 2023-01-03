#include "main.h"
/**
 * _strchr - locates a char 
 * @s: string
 * @c: character to search
 * Return: Always 0 on success
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
