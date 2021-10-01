#include <stdio.h>

int kay_sqrt(int nb)
{
	int n;

	n = 1;
	if (nb > 0)
	{
		while (n * n <= nb)
		{
			if (n * n == nb)
				return (n);
			else if (n >= 46341)
				return (0);
			n++;
		}
	}
	return (0);
}

int main(void)
{
	// printf("-10 = %d (0)\n", kay_sqrt(-10));
	// printf("-1 = %d (0)\n", kay_sqrt(-1));
	// printf(" 0 = %d (0)\n", kay_sqrt(0));
	// printf(" 1 = %d (1)\n", kay_sqrt(1));
	// printf(" 2 = %d (0)\n", kay_sqrt(2));
	// printf(" 3 = %d (0)\n", kay_sqrt(3));
	// printf(" 4 = %d (2)\\n", kay_sqrt(16));
	printf(" 55 = %d\n", kay_sqrt(55));
}
