#include "main.h"
/**
 * _memset - fill memory with a value
 * @s:starting address to be filled
 * @b: value
 * @n: number of bytes to change
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
