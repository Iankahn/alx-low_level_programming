#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints out the char c
 * @c: character to be printed
 * Return: 1 on success
 * On error -1 should be returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
