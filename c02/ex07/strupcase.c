#include <stdio.h>

char	*ft_strupcase(char *str)
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
		if (arr >= 'a' && arr <= 'z')
		{
			str[i] = arr - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(int argc, char *argv[])
{
	printf("%s\n", ft_strupcase(argv[1]));
}*/
