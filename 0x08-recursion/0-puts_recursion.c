#include"main.h"
/**
 * _puts_recursion - recursion function
 * @s: The character to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		if (*s == ' ')
		{
			_putchar(' ');
		}
		else
		{
			_putchar(*s);
		}
		_puts_recursion(s + 1);
	}
}
