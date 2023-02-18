#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints if number is positive,zero or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n=rand()-Rand_MAX/2;
	if(n > 0)
	{
		printf("%d is positive\n",n);
	}
	else if (n==0)
	{
		printf("% is zerrro\n",n);
	}
			else
			{
		prntf("%d is negative\n",n);
	}

    return (0);
}
