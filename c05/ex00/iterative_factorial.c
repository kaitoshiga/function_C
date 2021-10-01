#include <stdio.h>

int iterative_factorial(int nb)
{
	int x = 1;

	if ((nb <= 0) || (nb > 12))
		return 0;
	while (nb > 0)
		x *= nb--;
	return (x);
}

int main(void)
{
	int nb = 14;
	printf("%d\n", iterative_factorial(nb));
}
