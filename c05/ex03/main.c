#include <stdio.h>

int recursive_power(int nb, int power);

int		main(void)
{
	printf(" 2 ^ 4 = %d (16)\n", recursive_power(2, 4));
	printf(" 2 ^ 1 = %d (2)\n", recursive_power(2, 1));
	printf(" 2 ^ 0 = %d (2)\n", recursive_power(2, 0));
}
