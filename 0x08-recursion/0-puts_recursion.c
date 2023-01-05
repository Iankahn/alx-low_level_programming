cat > 0-puts_recursion.c

/*
 * File: 0-puts_recursion.c
 * Auth: sam
 */

#include "main.h"
/**
 * _puts_recursion - prints string and newline
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
