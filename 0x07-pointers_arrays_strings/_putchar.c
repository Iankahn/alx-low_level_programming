#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints out character c to stdout
 * @c: The character to print
 * Return: On success 1
 * On error return -1
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
