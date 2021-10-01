#include <stdio.h>

int is_prime(int nb)
{
	int n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int main(void)
{
	// printf("-10 = %d (0)\n", is_prime(-10));
	// printf("-1 = %d (0)\n", is_prime(-1));
	// printf(" 0 = %d (0)\n", is_prime(0));
	// printf(" 1 = %d (0)\n", is_prime(1));
	// printf(" 2 = %d (1)\n", is_prime(2));
	// printf(" 3 = %d (1)\n", is_prime(3));
	// printf(" 4 = %d (0)\n", is_prime(4));
	// printf(" 5 = %d (1)\n", is_prime(5));
	// printf(" 57 = %d (0)\n", is_prime(57));
	// printf(" 59 = %d (1)\n", is_prime(59));
	// printf(" 87 = %d (0)\n", is_prime(87));
	// printf(" 89 = %d (0)\n", is_prime(89));
	printf(" 97 = %d (0)\n", is_prime(97));
	// printf(" 99 = %d (1)\n", is_prime(99));
}
