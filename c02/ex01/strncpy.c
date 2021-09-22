#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(int argc, char *argv[])
{
	char	dest[20] = "zoomtin";
	char	*src;
	char	*address1;
	char	*address2;

	if (argc < 1)
	{
		printf("引数の数が足りません");
		return (0);
	}
	src = argv[1];
	strncpy(dest, src, 6);
	printf("original: dest = %s, src = %s\n", dest, src);
	ft_strncpy(dest, src, 6);
	printf("my func: dest = %s, src = %s\n", dest, src);
	return (0);
}*/
