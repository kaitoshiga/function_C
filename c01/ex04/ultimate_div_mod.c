#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	keep;

	keep = *a;
	*a = *a / *b;
	*b = keep % *b;
}

/*int	main(void)
{
	int	a, b;

	a = 43;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("%d, extra %d", a, b);
	return 0;
}*/
