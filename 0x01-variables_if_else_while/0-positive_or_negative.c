#include <stdlib.h>
#include <time.h>
/* headers */
#include <stdio.h>


/*
 * main - entry 
 *
 * Description: prints positive or negative depending on the number
 *
 * Return: Always 0 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() -RAND_MAX / 2;

	if (!n)
		printf("%d is zero\n", n);
	else
		(n > 0) ? printf("%d is positive\n", n) : printf("%d is negative\n", n);

	return (0);
}
