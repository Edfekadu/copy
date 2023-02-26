#include "main.h"
/**
 *print numbers 0 up to 9
 *@y:the second number to multiply with frist number
 * Return: The numbers since 0 t0 9
 */
void print_numbers(void)
{
	int x;
	for (x=0; x<=9;x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
