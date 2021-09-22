#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;
	char	arr;

	i = 0;
	while (*str)
	{
		arr = str[i];
		if (arr == '\0')
		{
			break ;
		}
		if (arr >= 'A' && arr <= 'Z')
		{
			str[i] = arr + 32;
		}
		i++;
	}
	return (str);
}

/*int	main(int argc, char *argv[])
{
	printf("%s\n", ft_strlowcase(argv[1]));
}*/
