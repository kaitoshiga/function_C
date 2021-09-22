#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	s1[] = "inimini";
	char	s2[] = "inimina";

	printf("original: s1 = %s, s2 = %s, cmp = %d\n", s1, s2, strcmp(s1, s2));
	printf("my func: s1 = %s, s2 = %s, cmp = %d\n", s1, s2, ft_strcmp(s1, s2));
	return (0);
}*/
