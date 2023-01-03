#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: where mem is stored
 * @src: where mem copied
 * @n: no of bytes
 * Return: copied mem with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
