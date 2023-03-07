#include "main.h"
/**
 *print numbers 0 up to 9
 *@y:the second number to multiply with frist number
 * Return: The numbers since 0 t0 9
 */
void most_numbers(void)
{
	int x,y;
	for(x=0; x<10;x++)
	{
		for (y=0; y<=14;y++)
	{
		if (y>0)
		{
			_putchar((y/10)+'0');
		}
		_putchar((y%10) + '0');
	}
		_putchar('\n');
	}
}
