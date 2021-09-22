#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}

/*int	main(void)
{
	char dest1[] = "inimini";
	char dest2[] = "inimini";
	char src[] = "rerai";
	printf("dest: %s, src: %s, A: %s\n", dest1, src, strcat(dest1, src));
	printf("dest: %s, src: %s, A: %s\n", dest2, src, ft_strcat(dest2, src));
}*/
