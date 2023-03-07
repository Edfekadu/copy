#include "unistd.h"

/**
 * _putchar write the character to stdout
 * @ac the charcter to print
 *return on succes 1
 * Return: Always 0.
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}

