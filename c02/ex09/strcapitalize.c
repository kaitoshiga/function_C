#include <stdio.h>

char  *ft_strcapitalize(char *str)
{
	int   i;
   char curr;

	i = 0;
	while (*str)
	{
		curr = str[i];
		if (curr == '\0')
		{
			break ;
		}
		if (curr >= 'a' && curr <= 'z')
		{
			str[i] = curr - 32;
		}
		else
		{
			return ;
		}
		i++;
	}
	return (str);
}

/*int	main(int argc, char *argv[])
{
	int i;

	i = 1;
	while(i < argc)
	{
		printf("%s\n", ft_strcapitalize(argv[i]));
		i++;
	}
}*/
