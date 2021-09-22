#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int a;
	int b;

	if(to_find[0] == '\0')
		return (str);
	a = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (to_find[b] == str[a + b])
		{
			if (to_find[b + 1] == '\0')
				return (&str[a]);
			b++;
		}
		a++;
	}
	return (0);
}

/*int	main(void)
{
	char arr1[] = "0123456789";
	char arr2[] = "0123456789";
	char need[] = "45";
	printf("str: %s, needle: %s, strstr: %s\n", arr1, need, strstr(arr1, need));
	printf("str: %s, needle: %s, strstr: %s\n", arr2, need, ft_strstr(arr2, need));
}*/
