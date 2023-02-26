#include "main.h"
/**
 *print numbers 0 up to 9
 *@y:the second number to multiply with frist number
 * Return: The numbers since 0 t0 9
 */
void print_most_numbers(void)
{
	int x=0;
	for (;x<=9; x++)
	{
		if (x==2 || x==4)
		{
			continue;
		}
		else
		{
			_putchar(x+'0');
		}
	}
	_putchar('\n');
}
