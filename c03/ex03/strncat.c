#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0' && (nb > b))
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

	printf("dest: %s, src: %s, A: %s\n", dest1, src, strncat(dest1, src, 4));
	printf("dest: %s, src: %s, A: %s\n", dest2, src, ft_strncat(dest2, src, 4));
}*/
