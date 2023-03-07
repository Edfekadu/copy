#include "main.h"
#include <unistd.h>

/**
 * _putchar -write the chatcter c to stdout
 * @c:the charcter to print
 *
 * Return =on success 1
 * on error,-1 is returned, and errno is set appropiriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
