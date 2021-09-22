#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*(s1 + i) != '\0' || *(s2 + i) != '\0') && (i < n))
	{
		if (*(s1 + i) == *(s2 + i))
		{
			i++;
		}
		else
		{
			return (*(s1 + i) - *(s2 + i));
		}
	}
	return (0);
}

/*int	main(void)
{
	char	s1[] = "inimini";
	char	s2[] = "iniminn";
	int n = 7;

	printf("original: s1 = %s, s2 = %s, cmp = %d\n", s1, s2, strncmp(s1, s2, n));
	printf("my func: s1 = %s, s2 = %s, cmp = %d\n", s1, s2, ft_strncmp(s1, s2, n));
	return (0);
}*/
