#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	keep;

	if	(*a == *b)
	{
		return ;
	}

	keep = *a;
	*a = *b;
	*b = keep;

}

/*int	main(void)
{
	int x, y;

	x = 1;
	y = 2;
	printf("swap前: %d, %d", x, y);
	ft_swap(&x, &y);
	printf("swap後: %d, %d", x, y);
	return 0;
}*/
