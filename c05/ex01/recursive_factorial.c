#include <stdio.h>

int recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * recursive_factorial(nb - 1));
}

int main(void)
{
	printf(" 4 = %d (24)\n", recursive_factorial(4));
}
