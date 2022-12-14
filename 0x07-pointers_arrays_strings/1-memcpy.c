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
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
	

