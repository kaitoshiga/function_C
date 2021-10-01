#include <stdio.h>
int fibonacci(int index)
{
	int aux;

	if (index == 0)
	{
		printf("a");
		return (0);
	}
	else if (index == 1)
	{
		printf("b");
		return (1);
	}
	else if (index > 1)
	{
		printf("c");
		aux = fibonacci(index - 1) + fibonacci(index - 2);
		return (aux);
	}
	else
		return (-1);
}

int		main(void)
{
	// printf("%d (0)\n", fibonacci(0));
	// printf("%d (1)\n", fibonacci(1));
	// printf("%d (1)\n", fibonacci(2));
	printf("%d (2)\n", fibonacci(3));
	printf("%d (3)\n", fibonacci(4));
	printf("%d (5)\n", fibonacci(5));
	// printf("%d (8)\n", fibonacci(6));
}
