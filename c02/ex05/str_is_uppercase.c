#include <stdio.h>
#include <stdbool.h>

int	ft_str_is_uppercase(char *str)
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
		if (!(arr >= 'A' && arr <= 'Z'))
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
	printf("%d\n", ft_str_is_uppercase(src));
}*/
