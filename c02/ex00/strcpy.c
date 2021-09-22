#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(int argc, char *argv[])
{
	char	dest1[100] = "tinkoromanzyu";
	char	dest2[100] = "iniminirerai";
	char	*src;

	if (argc < 1)
	{
		printf("引数の数が足りません");
		return (0);
	}
	src = argv[1];
	ft_strcpy(dest1, src);
	strcpy(dest2, src);
	printf("original: dest = %s, src = %s\n", dest1, src);
	printf("my func: dest = %s, src = %s\n", dest2, src);
	return (0);
}*/
