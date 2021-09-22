#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

void	ft_putchar(char d)
{
	write(1, &d, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 12);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}

	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
		return ;
	}
}

/*int main(int argc, char *argv[])
{
	int i = 1;
	int a;
	while (i < argc)
	{
		a = atoi(argv[i]);
		write(1, "myfunc: ", 8);
		ft_putnbr(a);
		i++;
	}
	return (0);
}*/
