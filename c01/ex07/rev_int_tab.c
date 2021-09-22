#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = *(tab+i);
		*(tab+i) = *(tab+(size - 1 - i));
		*(tab+(size - 1 - i)) = tmp;
		i++;
	}
}

void	number_print(int numbers[], int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d ", numbers[i]);
		i++;
	}
}

/*int	main(int argc, char *argv[])
{
	int x;
	int y;
	int numbers[argc -1];
	int *point;

	x = 0;
	y = 1;
	while (y < argc)
	{
		numbers[x] = atoi(*(argv+y));
		y++;
		x++;
	}
	point = &numbers[0];
	printf("before: ");
	number_print(numbers, argc - 1);
	ft_rev_int_tab(point, argc - 1);
	printf("\nafter: ");
	number_print(numbers, argc - 1);
}*/
