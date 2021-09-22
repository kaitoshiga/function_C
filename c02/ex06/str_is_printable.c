#include <stdio.h>
#include <stdbool.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	bool	tf;
	char	arr;

	i = 0;
	tf = true;
	while (tf == true)
	{
		arr = str[i];
		if (arr == '\0')
		{
			break ;
		}
		if (!(arr >= ' ' && arr <= '~'))
		{
			tf = false;
			break ;
		}
		i++;
	}
	return (tf);
}

/*int	main(int argc, char *argv[])
{
	char *src;

	src = argv[1];
	printf("%d\n", ft_str_is_printable(src));
}*/
